#include <cstdint>
#include <string>
#include <vector>

#define PART_SIZE 9
#define PART_MAX 1000000000

class WideInt {
    int8_t sign;
    uint32_t length;
    uint32_t point;
    std::vector<uint32_t> parts;

    int8_t compare(const WideInt&);

public:
    WideInt();
    WideInt(std::string);
    bool operator<(const WideInt&);
    WideInt operator+(const WideInt&) const;
    WideInt operator-(const WideInt&) const;
};

// constexpr?
WideInt operator""_w(const char *str) {
    return WideInt(str);
}
