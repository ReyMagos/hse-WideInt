module;

#include <complex>
#include <cstring>
#include <numbers>
#include <cmath>
#include <iostream>
#include "bitutils.h"
#include "../modules/WideInt.hpp"

module WideInt;

typedef std::complex<long double> ftype;

void fft(ftype *a, int n, bool invert) {
    for (int len = 2; len <= n; len <<= 1) {
        double arg = (invert ? -1 : 1) * 2 * std::numbers::pi / len;
        ftype wn(cos(arg), sin(arg));
        for (int i = 0; i < n; i += len) {
            int k = (len >> 1);
            ftype w(1);
            for (int j = 0; j < k; ++j) {
                ftype u = a[i + j],
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
    size_t len = parts.size(),
           that_len = that.parts.size();

    const int lgn = std::__lg(std::max(len, that_len) - 1) + 2;
    size_t n = (1 << lgn);

    ftype p1[n], p2[n];
    std::memset(p1, 0, sizeof(ftype) * n);
    for (unsigned i = 0; i < len; ++i) {
        p1[reverse_bits<unsigned>(i) >> (32 - lgn)] = parts[i];
    }

    std::memset(p2, 0, sizeof(ftype) * n);
    for (unsigned i = 0; i < that_len; ++i) {
        p2[reverse_bits<unsigned>(i) >> (32 - lgn)] = that.parts[i];
    }

    fft(p1, n, false);
    fft(p2, n, false);
    for (size_t i = 0; i < n; ++i)
        p1[i] *= p2[i];

    for (unsigned i = 0; i < n; ++i) {
        unsigned j = reverse_bits<unsigned>(i) >> (32 - lgn);
        if (i < j)
            std::swap(p1[i], p1[j]);
    }

    fft(p1, n, true);

    WideInt r;
    r.sign = (sign + that.sign) % 2;

    r.exp = exp + that.exp;
    unsigned cut = 0;
    if (r.exp < 0 && -r.exp > r.prec)
        cut = -r.exp - r.prec;
    r.exp += cut;

    r.parts.resize(n - cut);

    base rem = 0;
    int j = 0;
    for (size_t i = 0; i < n; ++i) {
        auto res = rem + std::lround(p1[i].real());
        if (j == 0 && res % PART_MAX == 0)
            r.exp++;
        else if (i >= cut)
            r.parts[j++] = res % PART_MAX;
        rem = res / PART_MAX;
    }

    while (r.parts.back() == 0)
        r.parts.pop_back();

    return r;
}

WideInt WideInt::operator*=(const WideInt &that) {
    *this = std::move(*this * that);
    return *this;
}
