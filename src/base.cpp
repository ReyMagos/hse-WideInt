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
            throw std::runtime_error(
                    std::format("Unexpected symbol '{}' at position {}", c, i));
        }
    }

    if (is_zero) {
        exp = 0;
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

std::ostream &operator<<(std::ostream &os, const WideInt &w) {
    if (os.iword(WideInt::debug_stream_flag) == 1) {
        os << std::format("[sign={}, exp={}, parts={}]: ", +w.sign, w.exp, w.parts.size());

        for (int i = 0; i < w.parts.size(); ++i) {
            os << std::setfill('0') << std::setw(9) << w.parts[i];
            if (i < w.parts.size() - 1)
                os << '.';
        }
    } else {
        if (w.sign)
            os << '-';

        // TODO: Standard printing
    }

    return os;
}
