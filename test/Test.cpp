import WideInt;

#include <gtest/gtest.h>

// TODO: Add random to tests

/*
 * Equality tests '=', '!='
 */

TEST(WideInt_eq, zero) {
    WideInt a = 0_w;
    WideInt b = 0_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, negative_zero) {
    WideInt a = -0_w;
    WideInt b = -0_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, mixed_sign_zero) {
    WideInt a = -0_w;
    WideInt b = 0_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, negative_non_zero) {
    WideInt a = -1_w;
    WideInt b = -1_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, mixed_sign_non_zero) {
    WideInt a = -1_w;
    WideInt b = 1_w;
    EXPECT_FALSE(a == b);
}

TEST(WideInt_eq, short_int) {
    WideInt a = 1_w;
    WideInt b = 1_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, long_int) {
    WideInt a = 12345678901234567890123456789123_w;
    WideInt b = 12345678901234567890123456789123_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, short_int_trailing_zeros) {
    WideInt a = 100000000_w;
    WideInt b = 100000000_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, long_int_trailing_zeros) {
    WideInt a = 100000000000000000000000000000000_w;
    WideInt b = 100000000000000000000000000000000_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, short_float) {
    WideInt a = 1.1_w;
    WideInt b = 1.1_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, long_float) {
    WideInt a = 1234567890123456.1234567890123456_w;
    WideInt b = 1234567890123456.1234567890123456_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, short_float_leading_zeros) {
    WideInt a = 0.0000000001_w;
    WideInt b = 0.0000000001_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt_eq, long_float_leading_zeros) {
    WideInt a = 0.000000000000000000000000000000001_w;
    WideInt b = 0.000000000000000000000000000000001_w;
    EXPECT_TRUE(a == b);
}

/*
 * Comparison tests '<', '>', '<=', '>='
 * Only less '<' operator is tested as long as other comparison
 * operators are implemented via it
 */

TEST(WideInt_comp, short_int) {
    WideInt a = 1_w;
    WideInt b = 2_w;
    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, long_int) {
    WideInt a = 12345678901234567890123456789012_w;
    WideInt b = 23456789012345678901234567890123_w;
    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, short_int_negative) {
    WideInt a = -1_w;
    WideInt b = 1_w;
    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, short_long_negative) {
    WideInt a = -23456789012345678901234567890123_w;
    WideInt b = 12345678901234567890123456789012_w;
    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, short_float) {
    WideInt a = 0.1_w;
    WideInt b = 0.2_w;
    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, long_float) {
    WideInt a = 0.000000000000000000000000000000001_w;
    WideInt b = 0.000000000000000000000000000000002_w;
    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, zero) {
    WideInt a = 0_w;
    WideInt b = 1_w;

    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, zero_long_small) {
    WideInt a = 0_w;
    WideInt b = 0.000000000000000000000000000000001_w;

    EXPECT_TRUE(a < b);
}

TEST(WideInt_comp, zero_negative) {
    WideInt a = 0_w;
    WideInt b = -1_w;

    EXPECT_FALSE(a < b);
}

TEST(WideInt_comp, zero_negative_long_small) {
    WideInt a = 0_w;
    WideInt b = -0.000000000000000000000000000000001_w;

    EXPECT_FALSE(a < b);
}
