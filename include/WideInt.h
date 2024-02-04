#include <cstdint>
#include <string>
#include <vector>

using base = uint32_t;
#define PART_SIZE 9
#define PART_MAX 1000000000

class WideInt {
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

    // TODO: Replace `print()` with redirecting to stream
    void print();
    friend std::ostream& operator<<(std::ostream&, const WideInt&);
};

constexpr WideInt operator""_w(const char *str) {
    return WideInt(str);
}
