module;

#include <cstdint>
#include <vector>
#include <stdexcept>
#include "../modules/WideInt.hpp"

#define EPS 0.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001_w

module WideInt;

class DivisionByZeroError: public std::exception {
public:
    const char *what() const noexcept {
        return "Division by zero";
    };
};

// TODO: simplify
WideInt WideInt::binary_div() const {
    bool odd = parts[0] & 1;

    WideInt r;
    r.sign = sign;
    r.exp = exp - odd;
    r.parts = std::vector<base>(parts.size() + odd);

    int8_t rem = 0;
    size_t len = parts.size(),
           rlen = r.parts.size();
    for (int i = 0; i < len; ++i) {
        rem = parts[len - 1 - i] & 1;
        r.parts[rlen - 1 - i] += parts[len - 1 - i] >> 1;
        r.parts[rlen - 1 - i - 1] += (rem * PART_MAX) >> 1;
    }

    if (r.parts.back() == 0)
        r.parts.pop_back();

    return r;
}

WideInt WideInt::operator/(const WideInt &that) const {
    if (that.isZero())
        throw DivisionByZeroError();

    WideInt left = 0_w, right = WideInt(*this);
    while (right - left > EPS) {
        WideInt quotient = (left + right).binary_div();
        if (quotient * that > *this)
            right = quotient;
        else
            left = quotient;
    }

    return left;
}
