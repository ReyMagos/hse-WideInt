module;

#include "WideInt.hpp"

export module WideInt;

export class WideInt {
    int8_t sign;
    int32_t exp;
    std::vector<base> parts;

    int8_t compare(const WideInt&, const WideInt&) const;
    void sum(const WideInt&, const WideInt&, const WideInt&) const;
    void subtract() const;

public:
    WideInt() = default;

    WideInt(const std::string&);

    WideInt(const WideInt&) = default;

    bool operator==(const WideInt &other) const {
        return compare(*this, other) == 0;
    };

    bool operator<(const WideInt &other) const {
        return compare(*this, other) == -1;
    }

    bool operator>(const WideInt &other) const {
        return compare(*this, other) == 1;
    }

    std::strong_ordering operator<=>(const WideInt &other) {
        auto result = compare(*this, other);
        if (result == 0)
            return std::strong_ordering::equal;
        if (result == 1)
            return std::strong_ordering::greater;
        return std::strong_ordering::less;
    }

    WideInt operator+(const WideInt&) const;

    WideInt operator-(const WideInt&) const;

    WideInt operator-();

    friend std::ostream &operator<<(std::ostream&, const WideInt&);
};

export WideInt operator""_w(const char *str) {
    return WideInt(str);
}
