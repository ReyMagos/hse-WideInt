// http://graphics.stanford.edu/~seander/bithacks.html#ReverseByteWith64BitsDiv
inline constexpr unsigned char reverse_byte(unsigned char b) {
    return b = (b * 0x0202020202ULL & 0x010884422010ULL) % 1023;
}

template<typename T> inline constexpr T reverse_bits(T n) {
    if (sizeof(T) == 1) {
#if defined(__clang__)
        return __builtin_bitreverse8(n);
#else
        return reverse_byte(n);
#endif
    }

    if (sizeof(T) == 2) {
#if defined(__clang__)
        return __builtin_bitreverse16(n);
#else
        unsigned char b0 = (n & 0xFF);
        unsigned char b1 = (n & 0xFF00) >> 8;
        return (reverse_byte(b0) << 8) | (reverse_byte(b1));
#endif
    }

    if (sizeof(T) == 4) {
#if defined(__clang__)
        return __builtin_bitreverse32(n);
#else
        unsigned char b0 = (n & 0xFF);
        unsigned char b1 = (n & 0xFF00) >> 8;
        unsigned char b2 = (n & 0xFF0000) >> 16;
        unsigned char b3 = (n & 0xFF000000) >> 24;
        return (reverse_byte(b0) << 24) | (reverse_byte(b1) << 16) |
               (reverse_byte(b2) << 8) | (reverse_byte(b3));
#endif
    }

    if (sizeof(T) == 8) {
#if defined(__clang__)
        return __builtin_bitreverse64(n);
#else
        unsigned char b0 = (n & 0xFF);
        unsigned char b1 = (n & 0xFF00) >> 8;
        unsigned char b2 = (n & 0xFF0000) >> 16;
        unsigned char b3 = (n & 0xFF000000) >> 24;
        unsigned char b4 = (n & 0xFF00000000) >> 32;
        unsigned char b5 = (n & 0xFF0000000000) >> 40;
        unsigned char b6 = (n & 0xFF000000000000) >> 48;
        unsigned char b7 = (n & 0xFF00000000000000) >> 56;
        return (reverse_byte(b0) << 56) | (reverse_byte(b1) << 48) |
               (reverse_byte(b2) << 40) | (reverse_byte(b3) << 32) |
               (reverse_byte(b4) << 24) | (reverse_byte(b5) << 16) |
               (reverse_byte(b6) << 8)  | (reverse_byte(b7));
#endif
    }
};
