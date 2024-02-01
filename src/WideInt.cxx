#include <stdexcept>

#include "../include/WideInt.h"

// FIXME: I'm sorry
#define min(a, b) ((a) < (b) ? (a) : (b))


WideInt::WideInt() {
    sign = 0;
    point = 0;
    length = 0;
    parts = std::vector<uint32_t>(1, 0);
}

//       start       point        end
//         |           |           |
//         123456789012.345678901234
//   |_______||_______| |_______||_______|
//       2        1         -1       -2

WideInt::WideInt(std::string num) {
    uint32_t start = 0, end = 0;
    bool start_found = false, point_found = false;
    sign = num[0] == '-';

    for (int i = sign; i < num.size(); ++i) {
        char c = num[i];

        if (c == '0' && start_found && !point_found) {
            end = i;
        } else if (c > '0' && c <= '9') {
            if (!start_found) {
                start = i;
                start_found = true;
            }
            end = i;
        } else if (c == '.') {
            point = i;
            point_found = true;
        } else {
            throw std::runtime_error("Unexpected symbol");
        }
    }


    parts = vector<uint32_t>(
            (std::max(point - start, 1) + (PART_SIZE - 1)) / PART_SIZE +  // integer part
            (std::max(end - point, 1) + (PART_SIZE - 1)) / PART_SIZE,     // float part
            0
    );
}

// TODO: remove trailing and leading zeros (if exists)
WideInt::WideInt(std::string num) {
    const size_t num_len = num.size();
    // Could be one part more due to sign and dot symbols
    const size_t parts_len = (num_len + PART_SIZE - 1) / PART_SIZE;
    sign = num[0] == '-';
    length = num_len - sign;
    parts = std::vector<uint32_t>(parts_len, 0);

    uint32_t order = 1;
    for (int i = 0; i < parts_len; ++i) {
        for (int j = 0; j < min(PART_SIZE, num_len - i * 9); ++j) {
            if (num[num_len - i * 9 - j] == '.') {
                length -= 1;
                point = i * 9 + j + 1;
                continue;
            }

            parts[i] += num[num_len - i * 9 - j] * order;
            order *= 10;
        }
    }

    if (parts.back() == 0) {
        parts.pop_back();
    }
}

int8_t compare(const WideInt &other) {
    if (sign < other.sign) {
        return 1;
    } else if (sign > other.sign) {
        return -1;
    }

    int8_t abs_cmp = 0;
    if (length - point > other.length - other.point) {
        abs_cmp = 1;
    } else if (length - point < other.length - other.point) {
        abs_cmp = -1;
    } else {
        for (int i = 0; i <; ++i) {

        }
    }
}

WideInt WideInt::operator+(const WideInt &other) const {
    WideInt r;

    uint32_t rem = 0;
    for (int i = 0; i; ++i) {
        uint32_t tmp = other.parts[i] + () + rem;
        r.parts[i] = tmp % PART_MAX;
        rem = tmp / PART_MAX;
    }

//    if ()

    return r;
}

WideInt WideInt::operator-(const WideInt &other) const {

}
