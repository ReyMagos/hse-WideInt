module;

#include <stdexcept>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <format>
#include <complex>
#include <cstring>
#include <numbers>

#include "utils.h"
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

std::ostream &operator<<(std::ostream &os, const WideInt &w) {
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

    size_t len = parts.size(),
            that_len = that.parts.size();

    if (!len && !that_len)
        return 0;
    else if (!that_len)
        return order;
    else if (!len)
        return -order;

    int msp = len + exp,
            that_msp = that_len + that.exp;

    if (msp > that_msp)
        return order;
    else if (msp < that_msp)
        return -order;

    for (int i = 0; i < std::max(len, that_len); ++i) {
        base part = (i < len ? parts[len - 1 - i] : 0),
                that_part = (i < that_len ? that.parts[that_len - 1 - i] : 0);

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
    // TODO: Pre-allocate vector
    WideInt r;

    int msp = parts.size() + exp,
            that_msp = that.parts.size() + that.exp;
    int lsp = exp,
            that_lsp = that.exp;
    r.exp = std::min(lsp, that_lsp);

    int leading_zeros = 0;
    base rem = 0;
    for (int i = std::min(lsp, that_lsp); i <= std::max(msp, that_msp); ++i) {
        // To avoid negative underflow during subtraction
        // we borrow 1 from the next part which is `PART_MAX` in current
        base sum = PART_MAX + rem;
        if (i >= lsp && i < msp)
            sum += parts[i - exp];
        if (i >= that_lsp && i < that_msp)
            sum += (that_negative ? -1 : 1) * that.parts[i - that.exp];

        // Here -1 will return borrowed 1
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

typedef std::complex<long double> complex_t;

void fft(complex_t *a, int n, bool invert) {
    for (int len = 2; len <= n; len <<= 1) {
        double arg = (invert ? -1 : 1) * 2 * std::numbers::pi / len;
        complex_t wn(cos(arg), sin(arg));
        for (int i = 0; i < n; i += len) {
            int k = (len >> 1);
            complex_t w(1);
            for (int j = 0; j < k; ++j) {
                complex_t u = a[i + j],
                          v = w * a[i + j + k];
                a[i + j] = u + v;
                a[i + j + k] = u - v;
                w *= wn;
            }
        }
    }

    if (invert)
        for (int i = 0; i < n; ++i)
            a[i] /= n;
}


WideInt WideInt::operator*(const WideInt &that) const {
    size_t firstSize = parts.size();
    size_t secondSize = that.parts.size();

    const int lgn = std::__lg(std::max(firstSize, secondSize) - 1) + 2;
    size_t n = (1 << lgn);

    complex_t p1[n], p2[n];
    std::memset(p1, 0, sizeof(complex_t) * n);
    for (unsigned i = 0; i < firstSize; ++i) {
        p1[reverse_bits<unsigned>(i) >> (32 - lgn)] = parts[i];
    }

    std::memset(p2, 0, sizeof(complex_t) * n);
    for (unsigned i = 0; i < secondSize; ++i) {
        p2[reverse_bits<unsigned>(i) >> (32 - lgn)] = that.parts[i];
    }

    fft(p1, n, false);
    fft(p2, n, false);
    for (size_t i = 0; i < n; ++i)
        p1[i] *= p2[i];

    for (unsigned i = 0; i < n; ++i) {
        unsigned j = reverse_bits<unsigned>(i) >> (32 - lgn);
        if (i < j)
            swap(p1[i], p1[j]);
    }

    fft(p1, n, true);

    WideInt r;
    r.sign = (sign + that.sign) % 2;
//    r.exp = n - (firstSize - exp) - (secondSize - that.exp) + 1;
    r.exp = exp + that.exp;
    r.parts.resize(n);

    base rem = 0;
    for (size_t i = 0; i < n; ++i) {
        auto res = rem + std::lround(p1[i].real());
        r.parts[i] = res % PART_MAX;
        rem = res / PART_MAX;
    }

    while (r.parts.back() == 0) {
        r.parts.pop_back();
//        r.exp--;
    }

    return r;
}
