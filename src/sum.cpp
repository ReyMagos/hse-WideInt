module;

#include <cstdint>
#include <algorithm>
#include "../modules/WideInt.hpp"

module WideInt;

WideInt WideInt::sum(const WideInt &that, bool that_negative = false) const {
    // TODO: Pre-allocate vector
    WideInt r;
    r.prec = std::max(prec, that.prec);

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
    // TODO: Make shallow copy ot `that` with negative sign and call operator+
    // WideInt minus_that = shallow_copy(that);
    // minus_that.sign = !minus_that.sign;
    // return *this + minus_that;

    WideInt r;

    if (sign == that.sign) {
        if (this->compare(that, true) >= 0) {
            r = this->sum(that, true);
            r.sign = sign;
        } else {
            r = that.sum(*this, true);
            r.sign = !that.sign;
        }
    } else {
        r = this->sum(that);
        r.sign = sign;
    }

    return r;
}

WideInt WideInt::operator-() const {
    WideInt w(*this);
    if (!w.isZero()) {
        w.sign = !w.sign;
    }
    return w;
}