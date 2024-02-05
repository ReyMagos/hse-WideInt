module;

#include "WideInt.h"

export module WideInt;

export class WideInt {
    int8_t sign;
    int32_t exp;
    std::vector<base> parts;

    int8_t compare(const WideInt&) const;

public:
    WideInt() = default;
    WideInt(const std::string&);
    WideInt(const WideInt&) = default;

    bool operator==(const WideInt& other) const {
        return compare(other) == 0;
    };
    bool operator<(const WideInt& other) const {
        return compare(other) == -1;
    };
    bool operator>(const WideInt& other) const {
        return compare(other) == 1;
    };
    bool operator<=(const WideInt& other) const {
        return compare(other) < 1;
    };
    bool operator>=(const WideInt& other) const {
        return compare(other) > -1;
    };
    WideInt operator+(const WideInt&) const;
    WideInt operator-(const WideInt&) const;
    WideInt operator-();

    friend std::ostream& operator<<(std::ostream&, const WideInt&);
};

export WideInt operator""_w(const char *str) {
    return WideInt(str);
}
