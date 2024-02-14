module;

#include <stdexcept>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <format>
#include <vector>
#include "../modules/WideInt.hpp"

module WideInt;

WideInt::WideInt(const std::string &num) {
    sign = 0;
    exp = 0;
    prec = DEFAULT_PREC;

    bool is_zero = true;

    // Actually `start` and `end` show index of the first and the last
    // non-zero digit in number respectively
    int start, end;
    int point = num.size();

    for (int i = 0; i < num.size(); ++i) {
        char c = num[i];

        if (c > '0' && c <= '9') {
            if (is_zero) {
                start = i;
                is_zero = false;
            }
            end = i;
        } else if (c == '.') {
            point = i;
        } else if (c != '0') {
            throw std::invalid_argument(
                    std::format("Unexpected symbol '{}' at position {}", c, i));
        }
    }

    if (is_zero) {
        return;
    }

    bool point_between = (point > start && point < end);

    // We move a point until number turns into the smallest integer
    // TODO: I believe it can be done much simpler
    if (point > end) {
        exp = -((end - point + 1) / PART_SIZE);
        point += -exp * PART_SIZE;
    } else {
        exp = -(((end - point) + (PART_SIZE - 1)) / PART_SIZE);
        point += -exp * PART_SIZE + 1;
    }
    base offset = std::pow(10, point - end - 1);
    int j = point - end - 1;

    size_t len = ((point - start - point_between) + (PART_SIZE - 1)) / PART_SIZE;
    parts = std::vector<base>(len, 0);

    // TODO: Point symbol makes impossible to use `i` as digit counter
    //       and adds an extra `if` in loop. Workaround needed
    for (int i = end; i >= start; --i) {
        if (num[i] == '.')
            continue;

        parts[j / PART_SIZE] += (num[i] - '0') * offset;
        offset *= 10;
        if (offset >= PART_MAX)
            offset = 1;
        ++j;
    }
}

// FIXME: This is temporary version that does not handle trailing zeros
//        and does not pre-allocate vector
WideInt::WideInt(long long num) {
    sign = (num < 0);
    exp = 0;
    prec = DEFAULT_PREC;

    base offset = 1;
    int j = 0;
    while (num) {
        int8_t digit = num % 10;
        num /= 10;

        if (j / PART_SIZE > (int)parts.size() - 1)
            parts.push_back(0);
        parts[j / PART_SIZE] += digit * offset;

        offset *= 10;
        if (offset >= PART_MAX)
            offset = 1;
        ++j;
    }
}

void print(std::ostream &os, const WideInt &w) {
    // FIXME: Trailing zeros and point
    if (w.sign)
        os << '-';

    int len = w.parts.size();
    bool first = true;
    for (int i = std::max(-w.exp, len - 1); i >= std::min(-w.exp, 0); --i) {
        if (!first)
            os << std::setfill('0') << std::setw(PART_SIZE);
        os << (i >= 0 && i < len ? w.parts[i] : 0);
        if (i == -w.exp)
            os << '.';
        first = false;
    }
}

#if BUILD_TYPE == Debug
void debug_print(std::ostream &os, const WideInt &w) {
    os << std::format("[sign={}, exp={}, parts={}]: ", +w.sign, w.exp, w.parts.size());

    for (int i = 0; i < w.parts.size(); ++i) {
        os << std::setfill('0') << std::setw(PART_SIZE) << w.parts[i];
        if (i < w.parts.size() - 1)
            os << '.';
    }
}
#endif

std::ostream &operator<<(std::ostream &os, const WideInt &w) {
#if BUILD_TYPE == Debug
    (os.iword(WideInt::debug_stream_flag) == 1 ? debug_print : print)(os, w);
    os.iword(WideInt::debug_stream_flag) = 0;
#else
    print(os, w);
#endif

    return os;
}
