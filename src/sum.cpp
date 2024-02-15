module;

#include <cstdint>
#include <algorithm>
#include "../modules/WideInt.hpp"

module WideInt;

void WideInt::sum(const WideInt &that, WideInt &res, bool that_negative = false) const {
    int msp = parts.size() + exp,
            that_msp = that.parts.size() + that.exp;
    int lsp = exp,
            that_lsp = that.exp;
    res.exp = std::min(lsp, that_lsp);
    res.parts.resize(std::max(msp, that_msp) - std::min(lsp, that_lsp) + 1);

    base rem = 0;
    int leading_zeros = 0;
    int j = 0;
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

        if (res.parts.empty() && sum == 0)
            res.exp += 1;
        else
            res.parts[j++] = sum;
    }

    while (res.parts.back() == 0)
        res.parts.pop_back();
}

WideInt WideInt::operator+(const WideInt &that) const {
    WideInt res;

    if (sign == that.sign) {
        this->sum(that, res);
        res.sign = sign;
    } else {
        if (this->compare(that, true) >= 0) {
            this->sum(that, res, true);
            res.sign = sign;
        } else {
            that.sum(*this, res, true);
            res.sign = that.sign;
        }
    }

    return res;
}

WideInt WideInt::operator+=(const WideInt &that) {
    if (sign == that.sign) {
        this->sum(that, *this);
    } else {
        if (this->compare(that, true) >= 0) {
            this->sum(that, *this, true);
        } else {
            that.sum(*this, *this, true);
            sign = that.sign;
        }
    }

    return *this;
}

WideInt WideInt::operator-(const WideInt &that) const {
    // TODO: Make shallow copy ot `that` with negative sign and call operator+
    // WideInt minus_that = shallow_copy(that);
    // minus_that.sign = !minus_that.sign;
    // return *this + minus_that;

    WideInt res;

    if (sign == that.sign) {
        if (this->compare(that, true) >= 0) {
            this->sum(that, res, true);
            res.sign = sign;
        } else {
            that.sum(*this, res, true);
            res.sign = !that.sign;
        }
    } else {
        this->sum(that, res);
        res.sign = sign;
    }

    return res;
}

WideInt WideInt::operator-() const {
    WideInt w(*this);
    if (!w.isZero()) {
        w.sign = !w.sign;
    }
    return w;
}