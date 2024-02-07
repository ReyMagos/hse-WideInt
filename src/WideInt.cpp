module;

#include <stdexcept>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <format>
#include "../modules/WideInt.hpp"

module WideInt;

WideInt::WideInt(const std::string &num) {
    sign = 0;
    bool is_zero = true;

    // Actually `start` and `end` show index of the first and the last
    // non-zero digit in number respectively
    int start, end;
    int point = num.size();

    for (int i = 0; i < num.size(); ++i) {
        char c = num[i];

        if (c > '0' && c <= '9') {
            if (is_zero) {
                start = i;
                is_zero = false;
            }
            end = i;
        } else if (c == '.') {
            point = i;
        } else if (c != '0') {
            throw std::runtime_error(
                    std::format("Unexpected symbol '{}' at position {}", c, i));
        }
    }

    if (is_zero) {
        exp = 0;
        return;
    }

    // We move a point until number turns into the smallest integer
    // TODO: I believe it can be done much simpler
    if (point > end) {
        exp = -((end - point + 1) / PART_SIZE);
        point += -exp * PART_SIZE;
    } else {
        exp = -(((end - point) + (PART_SIZE - 1)) / PART_SIZE);
        point += -exp * PART_SIZE + 1;
    }
    base offset = std::pow(10, point - end - 1);
    int j = point - end - 1;

    // FIXME: `point - start` may count point symbol
    parts = std::vector<base>(((point - start) + (PART_SIZE - 1)) / PART_SIZE, 0);

    // TODO: Point symbol makes impossible to use `i` as digit counter
    //       and adds an extra `if` in loop. Workaround needed
    for (int i = end; i >= start; --i) {
        if (num[i] == '.')
            continue;

        parts[j / PART_SIZE] += (num[i] - '0') * offset;
        offset *= 10;
        if (offset >= PART_MAX)
            offset = 1;
        ++j;
    }
}

std::ostream& operator<<(std::ostream& os, const WideInt& w) {
    if (os.iword(WideInt::debug_stream_flag) == 0) {
        os << std::format("[sign={}, exp={}, parts={}]: ", +w.sign, w.exp, w.parts.size());

        for (int i = 0; i < w.parts.size(); ++i) {
            os << std::setfill('0') << std::setw(9) << w.parts[i];
            if (i < w.parts.size() - 1)
                os << '.';
        }
    } else {
        // TODO: Standard print function
    }

    return os;
}

inline int8_t compare(const WideInt &a, const WideInt &b, bool absolute = false) {
    if (!absolute) {
        if (a.sign < b.sign)
            return 1;
        else if (a.sign > b.sign)
            return -1;
    }

    int8_t order = (a.sign == 0 || absolute ? 1 : -1);

    size_t a_len = a.parts.size();
    size_t b_len = b.parts.size();

    if (!a_len && !b_len)
        return 0;
    else if (!b_len)
        return order;
    else if (!a_len)
        return -order;

    int a_msp = a_len + a.exp;
    int b_msp = b_len + b.exp;

    if (a_msp > b_msp)
        return order;
    else if (a_msp < b_msp)
        return -order;

    for (int i = 0; i < std::max(a_len, b_len); ++i) {
        base a_part = (i < a_len ? a.parts[a_len - 1 - i] : 0);
        base b_part = (i < b_len ? b.parts[b_len - 1 - i] : 0);

        if (a_part > b_part)
            return order;
        else if (a_part < b_part)
            return -order;
    }

    return 0;
}

bool WideInt::operator==(const WideInt &other) const {
    return compare(*this, other) == 0;
};

std::strong_ordering WideInt::operator<=>(const WideInt &other) const {
    auto result = compare(*this, other);
    if (result == 1)
        return std::strong_ordering::greater;
    if (result == -1)
        return std::strong_ordering::less;
    return std::strong_ordering::equal;
}

inline void sum(const WideInt &a, const WideInt &b, WideInt &r) {
    int a_msp = a.parts.size() + a.exp,
        b_msp = b.parts.size() + b.exp;
    int a_lsp = a.exp,
        b_lsp = b.exp;
    r.exp = std::min(a_lsp, b_lsp);

    int leading_zeros = 0;
    base rem = 0;
    for (int i = std::min(a_lsp, b_lsp); i <= std::max(a_msp, b_msp); ++i) {
        base sum = rem;
        if (i >= a_lsp && i < a_msp)
            sum += a.parts[i - a.exp];
        if (i >= b_lsp && i < b_msp)
            sum += b.parts[i - b.exp];

        rem = sum / PART_MAX;
        sum %= PART_MAX;

        if (sum != 0) {
            for (; leading_zeros > 0; --leading_zeros)
                r.parts.push_back(0);
            r.parts.push_back(sum);
        } else {
            (r.parts.empty() ? r.exp : leading_zeros) += 1;
        }
    }
}

inline void sub(const WideInt &a, const WideInt &b, WideInt &r) {
    int a_msp = a.parts.size() + a.exp,
        b_msp = b.parts.size() + b.exp;
    int a_lsp = a.exp,
        b_lsp = b.exp;
    r.exp = std::min(a_lsp, b_lsp);

    int leading_zeros = 0;
    base rem = 0;
    for (int i = std::min(a_lsp, b_lsp); i <= std::max(a_msp, b_msp); ++i) {
        base diff = PART_MAX + rem;
        if (i >= a_lsp && i < a_msp)
            diff += a.parts[i - a.exp];
        if (i >= b_lsp && i < b_msp)
            diff -= b.parts[i - b.exp];

        rem = -1 + diff / PART_MAX;
        diff %= PART_MAX;

        if (diff != 0) {
            for (; leading_zeros > 0; --leading_zeros)
                r.parts.push_back(0);
            r.parts.push_back(diff);
        } else {
            (r.parts.empty() ? r.exp : leading_zeros) += 1;
        }
    }
}

WideInt WideInt::operator+(const WideInt &other) const {
    WideInt r;

    if (sign == other.sign) {
        r.sign = sign;
        sum(*this, other, r);
    } else {
        if (compare(*this, other, true) >= 0) {
            r.sign = sign;
            sub(*this, other, r);
        } else {
            r.sign = other.sign;
            sub(other, *this, r);
        }
    }

    return r;
}

WideInt WideInt::operator-(const WideInt &other) const {
    WideInt r;

    if (sign == other.sign) {
        if (compare(*this, other, true) >= 0) {
            r.sign = sign;
            sub(*this, other, r);
        } else {
            r.sign = -other.sign;
            sub(other, *this, r);
        }
    } else {
        r.sign = sign;
        sum(*this, other, r);
    }

    return r;
}

WideInt WideInt::operator-() const {
    WideInt w(*this);
    if (!w.parts.empty()) {
        w.sign = !w.sign;
    }
    return w;
}
