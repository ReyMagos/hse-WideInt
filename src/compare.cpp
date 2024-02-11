module;

#include <cstdint>
#include <algorithm>
#include "../modules/WideInt.hpp"

module WideInt;

int8_t WideInt::compare(const WideInt &that, bool absolute = false) const {
    if (!absolute) {
        if (sign < that.sign)
            return 1;
        else if (sign > that.sign)
            return -1;
    }

    int8_t order = (sign == 0 || absolute ? 1 : -1);

    size_t len = parts.size(),
           that_len = that.parts.size();

    if (!len && !that_len)
        return 0;
    else if (!that_len)
        return order;
    else if (!len)
        return -order;

    int msp = len + exp,
        that_msp = that_len + that.exp;

    if (msp > that_msp)
        return order;
    else if (msp < that_msp)
        return -order;

    for (int i = 0; i < std::max(len, that_len); ++i) {
        base part = (i < len ? parts[len - 1 - i] : 0),
                that_part = (i < that_len ? that.parts[that_len - 1 - i] : 0);

        if (part > that_part)
            return order;
        else if (part < that_part)
            return -order;
    }

    return 0;
}

bool WideInt::operator==(const WideInt &that) const {
    return this->compare(that) == 0;
};

std::strong_ordering WideInt::operator<=>(const WideInt &that) const {
    auto result = this->compare(that);
    if (result == 1)
        return std::strong_ordering::greater;
    if (result == -1)
        return std::strong_ordering::less;
    return std::strong_ordering::equal;
}