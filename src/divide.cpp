module;

#include <cstdint>
#include <vector>
#include <stdexcept>
#include "../modules/WideInt.hpp"

module WideInt;

WideInt WideInt::binary_div() const {
    WideInt res;
    res.sign = sign;

    // `odd` adds new part for the edge odd digit's quotient
    int odd = parts[0] & 1;
    res.exp = exp - odd;

    int cut = 0;
    if (res.exp < 0 && -res.exp > res.prec)
        cut = -res.exp - res.prec;
    res.exp += cut;

    res.parts.resize(parts.size() + odd - cut);

    size_t len = parts.size(),
           rlen = res.parts.size();
    for (int i = 1; i <= len; ++i) {
        res.parts[rlen - i] += parts[len - i] >> 1;
        if (i + 1 <= rlen)
            res.parts[rlen - i - 1] += ((parts[len - i] & 1) * PART_MAX) >> 1;
    }

    while (res.parts.back() == 0)
        res.parts.pop_back();

    return res;
}

WideInt WideInt::operator/(const WideInt &that) const {
    if (that.isZero())
        throw DivisionByZeroError();

    WideInt eps = 1_w;
    for (int i = 0; i < prec; ++i)
        eps = eps * 0.0000001_w;

    WideInt left = 0_w, right = WideInt(*this);
    while (right - left > eps) {
        WideInt quotient = (left + right).binary_div();
        if (quotient * that > *this) {
            right = quotient;
        } else {
            left = quotient;
        }
    }

    return left;
}
