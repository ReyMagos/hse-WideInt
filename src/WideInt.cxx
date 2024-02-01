#include <stdexcept>
#include <cmath>
#include <iostream>
#include <iomanip>
#include <format>

#include "../include/WideInt.h"


/*
 *       start       point        end
 *         |           |           |
 *         123456789012.345678901234
 *   |_______||_______| |_______||_______|
 *       1        0        -1       -2
 *
 *      start end                point
 *          | |                    |
 *          12300000000000000000000.0
 *      |_______|
 *          2
 *
 *      point              start end
 *        |                    | |
 *       0.00000000000000000000123
 *                           |_______|
 *                              -3
 */


WideInt::WideInt(std::string num) {
    bool is_zero = true;

    // Actually `start` and `end` show index of the first and the last
    // non-zero digit in number respectively
    int start, end;
    int point = num.size();

    sign = num[0] == '-';

    for (int i = sign; i < num.size(); ++i) {
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
        return;
    }

    // TODO: simplify and describe this
    base d = 1;
    if (point < start) {
        // 0.00...00123
        exp = -((end - point) + (PART_SIZE - 1)) / PART_SIZE;
    } else if (point > end) {
        // 12300...00.0
        exp = (point - end - 1) / PART_SIZE;
        end += (point - end - 1) % PART_SIZE;
    } else {
        exp = -((end - point) + (PART_SIZE - 1)) / PART_SIZE;
        d = pow(10, PART_SIZE - (end - point) % PART_SIZE);
    }

    // FIXME: `end - start + 1` may count point symbol
    // FIXME: `max(..., 2)` handles exceptional case when number is small enough to be contained
    //         in one part but shouldn't due to floating point (like `1.25`)
    parts = std::vector<base>(std::max(((end - start + 1) + (PART_SIZE - 1)) / PART_SIZE, 2), 0);

    for (int i = end; i >= start; --i) {
        // TODO: Workaround to remove extra check from loop
        if (num[i] == '.')
            continue;

        parts[(end - i) / PART_SIZE] += (num[i] - '0') * d;
        d *= 10;
        if (d >= PART_MAX)
            d = 1;
    }
}

void WideInt::print() {
    using namespace std;

    if (sign) {
        cout << '-';
    }

    int point = parts.size() + exp;

    if (point <= 0) {
        cout << "0.";
        for (int i = 0; i < point; ++i) {
            cout << setfill('0') << setw(9) << 0;
        }
    }

    for (int i = 1; i <= parts.size(); ++i) {
        if (i != 1) {
            cout << setfill('0') << setw(9);
        }
        cout << parts[parts.size() - i];

        if (point == i) {
            cout << '.';
        }
    }

    for (int i = 0; i < exp; ++i) {
        cout << setfill('0') << setw(9) << 0;
    }

    cout << endl;
};

int8_t WideInt::compare(const WideInt &other) {
    if (sign < other.sign) {
        return 1;
    } else if (sign > other.sign) {
        return -1;
    }

    int8_t abs_cmp = 0;
}

WideInt WideInt::operator-(const WideInt &other) const {

}

WideInt WideInt::operator-() {
    WideInt w(*this);
    w.sign = !w.sign;
    return w;
}

int main(void) {
//    WideInt a = -0.10234235124000000000_w;
    WideInt a = -12_w;
    a.print();
}
