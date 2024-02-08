module;

#include "WideInt.hpp"

export module WideInt;

export class WideInt {
private:
    int8_t sign;
    int32_t exp;

    // typedef base v8ui __attribute__ (( vector_size(32) ));
    // std::vector<v8ui> parts;
    std::vector<base> parts;

    static int debug_stream_flag;

    WideInt sum(const WideInt&, bool negative) const;
    int8_t compare(const WideInt&, bool absolute) const;

public:
    WideInt() = default;
    WideInt(const std::string&);

    bool operator==(const WideInt&) const;
    std::strong_ordering operator<=>(const WideInt&) const;

    WideInt operator+(const WideInt&) const;
    WideInt operator-(const WideInt&) const;
    WideInt operator-() const;

    WideInt operator*(const WideInt&) const;

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
