module;

#include <cstdint>
#include <vector>
#include <stdexcept>
#include <iostream>
#include "../modules/WideInt.hpp"

module WideInt;

class DivisionByZeroError: public std::exception {
public:
    const char *what() const noexcept {
        return "Division by zero";
    };
};

WideInt WideInt::binary_div() const {
    bool odd = parts[0] & 1;

    WideInt r;
    r.sign = sign;
    r.prec = prec;

    // `odd` adds new part for the edge odd digit's quotient
    r.exp = exp - odd;
    r.parts = std::vector<base>(parts.size() + odd);

    size_t len = parts.size(),
           rlen = r.parts.size();
    for (int i = 1; i <= len; ++i) {
        r.parts[rlen - i] += parts[len - i] >> 1;
        r.parts[rlen - i - 1] += ((parts[len - i] & 1) * PART_MAX) >> 1;
    }

    if (r.parts.back() == 0)
        r.parts.pop_back();

    return r;
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
        if (quotient * that > *this)
            right = quotient;
        else
            left = quotient;
    }

    WideInt res;
    res.sign = left.sign;
    res.prec = prec;
    res.exp = left.exp;

    unsigned cut = 0;
    if (res.exp < 0 && -res.exp > res.prec)
        cut = -res.exp - res.prec;
    res.exp += cut;

    for (int i = cut; i < left.parts.size(); ++i)
        res.parts.push_back(left.parts[i]);

    return res;
}
