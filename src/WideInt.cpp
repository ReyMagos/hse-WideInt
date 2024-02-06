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

std::ostream& operator<<(std::ostream& out, const WideInt& w) {
    // Debug output
    out << "[exp=" << exp << "]: ";

    if (w.sign) {
        out << '-';
    }

    for (int i = 0; i < w.parts.size(); ++i) {
        out << std::setfill('0') << std::setw(9) << w.parts[i];
        if (i < w.parts.size() - 1)
            out << '.';
    }

    return out;
}

int8_t WideInt::compare(const WideInt& a, const WideInt &b) const {
    if (a.sign < b.sign) {
        return 1;
    } else if (a.sign > b.sign) {
        return -1;
    }

    bool a_is_zero = a.parts.empty();
    bool b_is_zero = b.parts.empty();

    if (a_is_zero && b_is_zero) {
        return 0;
    } else if (b_is_zero) {
        return 1;
    } else if (a_is_zero) {
        return -1;
    }

    int a_head = a.parts.size() + a.exp;
    int b_head = b.parts.size() + b.exp;
    if (a_head > b_head) {
        return 1;
    } else if (a_head < b_head) {
        return -1;
    }

    for (int i = 0; i < std::max(a.parts.size(), b.parts.size()); ++i) {
        base a_part = (i < a.parts.size() ? a.parts[a.parts.size() - 1 - i] : 0);
        base b_part = (i < b.parts.size() ? b.parts[b.parts.size() - 1 - i] : 0);

        if (a_part > b_part) {
            return 1;
        } else if (a_part < b_part) {
            return -1;
        }
    }

    return 0;
}

// TODO: `+` and `-` should refer to one function which will redirect
//       to `sum` or `sub` respectively according by numbers' signs
WideInt WideInt::operator+(const WideInt &other) const {
    WideInt r;
    r.sign = sign;

    int msp = parts.size() + exp,
        other_msp = other.parts.size() + other.exp;
    int lsp = exp,
        other_lsp = other.exp;
    r.exp = std::min(lsp, other_lsp);

    int zero_parts = 0;
    base rem = 0;
    for (int i = std::min(lsp, other_lsp); i <= std::max(msp, other_msp); ++i) {
        base sum = rem;
        if (i >= lsp && i < msp) {
            sum += parts[i - exp];
        }
        if (i >= other_lsp && i < other_msp) {
            sum += other.parts[i - other.exp];
        }

        rem = sum / PART_MAX;
        sum %= PART_MAX;

        if (sum != 0) {
            for (; zero_parts > 0; --zero_parts) {
                r.parts.push_back(0);
            }
            r.parts.push_back(sum);
        } else {
            if (r.parts.empty()) {
                r.exp += 1;
            } else {
                zero_parts += 1;
            }
        }
    }

    return r;
}

WideInt WideInt::operator-(const WideInt &other) const {

}

WideInt WideInt::operator-() {
    WideInt w(*this);
    if (!w.parts.empty()) {
        w.sign = !w.sign;
    }
    return w;
}
