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

    int8_t compare(const WideInt&);

public:
    WideInt() = default;
    WideInt(std::string);
    bool operator<(const WideInt&);
    WideInt operator+(const WideInt&) const;
    WideInt operator-(const WideInt&) const;
    WideInt operator-();
    void print();
};

// TODO: constexpr?
WideInt operator""_w(const char *str) {
    return WideInt(str);
}
