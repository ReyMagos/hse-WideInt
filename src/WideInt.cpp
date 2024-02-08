module;

#include <stdexcept>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <format>
#include <complex>
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

int8_t WideInt::compare(const WideInt &that, bool absolute = false) const {
    if (!absolute) {
        if (sign < that.sign)
            return 1;
        else if (sign > that.sign)
            return -1;
    }

    int8_t order = (sign == 0 || absolute ? 1 : -1);

    size_t len = parts.size();
    size_t that_len = that.parts.size();

    if (!len && !that_len)
        return 0;
    else if (!that_len)
        return order;
    else if (!len)
        return -order;

    int msp = len + exp;
    int that_msp = that_len + that.exp;

    if (msp > that_msp)
        return order;
    else if (msp < that_msp)
        return -order;

    for (int i = 0; i < std::max(len, that_len); ++i) {
        base part = (i < len ? parts[len - 1 - i] : 0);
        base that_part = (i < that_len ? that.parts[that_len - 1 - i] : 0);

        if (part > that_part)
            return order;
        else if (part < that_part)
            return -order;
    }

    return 0;
}

bool WideInt::operator==(const WideInt &that) const {
    return this->compare(that) == 0;
};

std::strong_ordering WideInt::operator<=>(const WideInt &that) const {
    auto result = this->compare(that);
    if (result == 1)
        return std::strong_ordering::greater;
    if (result == -1)
        return std::strong_ordering::less;
    return std::strong_ordering::equal;
}

WideInt WideInt::sum(const WideInt &that, bool that_negative = false) const {
    WideInt r;

    int msp = parts.size() + exp,
        that_msp = that.parts.size() + that.exp;
    int lsp = exp,
        that_lsp = that.exp;
    r.exp = std::min(lsp, that_lsp);

    int leading_zeros = 0;
    base rem = 0;
    for (int i = std::min(lsp, that_lsp); i <= std::max(msp, that_msp); ++i) {
        base sum = PART_MAX + rem;
        if (i >= lsp && i < msp)
            sum += parts[i - exp];
        if (i >= that_lsp && i < that_msp)
            sum += (that_negative ? -1 : 1) * that.parts[i - that.exp];

        rem = -1 + sum / PART_MAX;
        sum %= PART_MAX;

        if (sum != 0) {
            for (; leading_zeros > 0; --leading_zeros)
                r.parts.push_back(0);
            r.parts.push_back(sum);
        } else {
            (r.parts.empty() ? r.exp : leading_zeros) += 1;
        }
    }

    return r;
}

WideInt WideInt::operator+(const WideInt &that) const {
    WideInt r;

    if (sign == that.sign) {
        r = this->sum(that);
        r.sign = sign;
    } else {
        if (this->compare(that, true) >= 0) {
            r = this->sum(that, true);
            r.sign = sign;
        } else {
            r = that.sum(*this, true);
            r.sign = that.sign;
        }
    }

    return r;
}

WideInt WideInt::operator-(const WideInt &that) const {
    WideInt r;

    if (sign == that.sign) {
        if (this->compare(that, true) >= 0) {
            r = this->sum(that, true);
            r.sign = sign;
        } else {
            r = that.sum(*this, true);
            r.sign = -that.sign;
        }
    } else {
        r = this->sum(that);
        r.sign = sign;
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

//typedef std::complex<double> ftype;
//
//void fft(std::vector<ftype> &p, ftype wn) {
//    int n = (int) p.size();
//    if (n == 1)
//        return;
//
//    std::vector<ftype> a(n / 2), b(n / 2);
//    for (int i = 0; i < n / 2; i++) {
//        a[i] = p[2 * i];
//        b[i] = p[2 * i + 1];
//    }
//
//    fft(a, wn * wn);
//    fft(b, wn * wn);
//
//    ftype w = 1;
//    for (int i = 0; i < n / 2; i++) {
//        p[i] = a[i] + w * b[i];
//        p[i + n / 2] = a[i] - w * b[i]; // w^(i+n/2) = -w^i
//        w *= wn;
//    }
//}
//
//std::vector<ftype> evaluate(std::vector<int> p) {
//    while (__builtin_popcount(p.size()) != 1)
//        p.push_back(0);
//    return fft(p, std::polar(1., 2 * pi / p.size()));
//}
//
//std::vector<int> interpolate(std::vector<ftype> p) {
//    int n = p.size();
//    auto inv = fft(p, std::polar(1., -2 * pi / n));
//    std::vector<int> res(n);
//    for(int i = 0; i < n; i++)
//        res[i] = round(real(inv[i]) / n);
//    return res;
//}
//
//WideInt WideInt::operator*(const WideInt& other) const {
//    std::vector<ftype> a = evaluate(this->parts);
//    std::vector<ftype> b = evaluate(other.parts);
//
//
//}
