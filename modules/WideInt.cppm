module;

#include <vector>
#include <cstdint>
#include <iostream>
#include <compare>
#include "WideInt.hpp"

export module WideInt;

export class WideInt {
private:
    int8_t sign;
    int32_t exp;
    // TODO: Currently precision counts parts instead of digits
    uint32_t prec;

    // typedef base v8ui __attribute__ (( vector_size(32) ));
    // std::vector<v8ui> parts;
    std::vector<base> parts;

    WideInt sum(const WideInt&, bool negative) const;
    int8_t compare(const WideInt&, bool absolute) const;
    WideInt binary_div() const;

public:
    WideInt() : sign(0), exp(0), prec(DEFAULT_PREC) {};
    WideInt(const std::string&);
    WideInt(long long);

    bool isZero() const {
        return parts.empty();
    }

    void set_precision(uint32_t prec) {
        this->prec = prec;
    }

    uint32_t get_precision() {
        return this->prec;
    }

    bool operator==(const WideInt&) const;
    std::strong_ordering operator<=>(const WideInt&) const;

    WideInt operator+(const WideInt&) const;
    WideInt operator-(const WideInt&) const;
    WideInt operator-() const;

    WideInt operator*(const WideInt&) const;
    WideInt operator/(const WideInt&) const;

    friend std::ostream& operator<<(std::ostream&, const WideInt&);
    friend void print(std::ostream&, const WideInt&);

#if BUILD_TYPE == Debug
    friend void debug_print(std::ostream&, const WideInt&);

    static int debug_stream_flag;

    static std::ios_base& debug_stream(std::ios_base &os) {
        os.iword(WideInt::debug_stream_flag) = !os.iword(WideInt::debug_stream_flag);
        return os;
    };
#endif
};

#if BUILD_TYPE == Debug
int WideInt::debug_stream_flag = std::ios_base::xalloc();
#endif

export WideInt operator""_w(const char *str) {
    return WideInt(str);
}
