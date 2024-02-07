module;

#include "WideInt.hpp"

export module WideInt;

export class WideInt {
    int8_t sign;
    int32_t exp;

    // typedef base v8ui __attribute__ (( vector_size(32) ));
    // std::vector<v8ui> parts;
    std::vector<base> parts;

    static int debug_stream_flag;

public:
    WideInt() = default;
    WideInt(const std::string&);
    WideInt(const WideInt&) = default;

    friend int8_t compare(const WideInt&, const WideInt&, bool absolute);
    bool operator==(const WideInt&) const;
    std::strong_ordering operator<=>(const WideInt&) const;

    friend void sum(const WideInt&, const WideInt&, WideInt&);
    WideInt operator+(const WideInt&) const;

    friend void sub(const WideInt&, const WideInt&, WideInt&);
    WideInt operator-(const WideInt&) const;
    WideInt operator-() const;

    friend std::ostream& operator<<(std::ostream&, const WideInt&);
    static std::ios_base& debug_stream(std::ios_base &os) {
        os.iword(WideInt::debug_stream_flag) = !os.iword(WideInt::debug_stream_flag);
        return os;
    };
};

int WideInt::debug_stream_flag = std::ios_base::xalloc();

export WideInt operator""_w(const char *str) {
    return WideInt(str);
}
