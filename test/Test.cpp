import WideInt;

#include <gtest/gtest.h>

/*
 * Equality tests `=`, `!=`
 */

TEST(WideInt_eq, zero) {
    WideInt a = 0_w;
    WideInt b = 0_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, zero_negative) {
    WideInt a = -0_w;
    WideInt b = -0_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, zero_mixed) {
    WideInt a = -0_w;
    WideInt b = 0_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, short_int_negative) {
    WideInt a = -1_w;
    WideInt b = -1_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, short_int_mixed) {
    WideInt a = -1_w;
    WideInt b = 1_w;
    EXPECT_FALSE(a == b);
}

TEST(WideInt_eq, short_int) {
    WideInt a = 1_w;
    WideInt b = 1_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, long_int) {
    WideInt a = 12345678901234567890123456789123_w;
    WideInt b = 12345678901234567890123456789123_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, short_int_trailing_zeros) {
    WideInt a = 100000000_w;
    WideInt b = 100000000_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, long_int_trailing_zeros) {
    WideInt a = 100000000000000000000000000000000_w;
    WideInt b = 100000000000000000000000000000000_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, short_float) {
    WideInt a = 1.1_w;
    WideInt b = 1.1_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, long_float) {
    WideInt a = 1234567890123456.1234567890123456_w;
    WideInt b = 1234567890123456.1234567890123456_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, short_float_leading_zeros) {
    WideInt a = 0.0000000001_w;
    WideInt b = 0.0000000001_w;
    EXPECT_EQ(a, b);
}

TEST(WideInt_eq, long_float_leading_zeros) {
    WideInt a = 0.000000000000000000000000000000001_w;
    WideInt b = 0.000000000000000000000000000000001_w;
    EXPECT_EQ(a, b);
}

/*
 * Comparison tests `<`, `>`, `<=`, `>=`
 * Only less `<` operator is tested as long as other comparison
 * operators are implemented via it
 */

TEST(WideInt_comp, short_int) {
    WideInt a = 1_w;
    WideInt b = 2_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, long_int) {
    WideInt a = 12345678901234567890123456789012_w;
    WideInt b = 23456789012345678901234567890123_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, short_int_negative) {
    WideInt a = -1_w;
    WideInt b = -2_w;
    EXPECT_GT(a, b);
}

TEST(WideInt_comp, long_int_negative) {
    WideInt a = -23456789012345678901234567890123_w;
    WideInt b = -12345678901234567890123456789012_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, short_int_mixed) {
    WideInt a = -1_w;
    WideInt b = 1_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, short_long_mixed) {
    WideInt a = -23456789012345678901234567890123_w;
    WideInt b = 12345678901234567890123456789012_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, short_float) {
    WideInt a = 0.1_w;
    WideInt b = 0.2_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, long_float) {
    WideInt a = 0.000000000000000000000000000000001_w;
    WideInt b = 0.000000000000000000000000000000002_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, zero) {
    WideInt a = 0_w;
    WideInt b = 1_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, zero_long_small) {
    WideInt a = 0_w;
    WideInt b = 0.000000000000000000000000000000001_w;
    EXPECT_LT(a, b);
}

TEST(WideInt_comp, zero_negative) {
    WideInt a = 0_w;
    WideInt b = -1_w;
    EXPECT_GT(a, b);
}

TEST(WideInt_comp, zero_negative_long_small) {
    WideInt a = 0_w;
    WideInt b = -0.000000000000000000000000000000001_w;
    EXPECT_GT(a, b);
}

/*
 * Addition and subtraction tests `+`, '-'
 */

TEST(WideInt_sum, short_int) {
    WideInt a = 1_w;
    WideInt b = 2_w;
    EXPECT_EQ(a + b, 3_w);
}

// Here occurs overflow to the new most significant part
TEST(WideInt_sum, long_int) {
    WideInt a = 12345678901234567890123456789012_w;
    WideInt b = 23456789012345678901234567890123_w;
    EXPECT_EQ(a + b, 35802467913580246791358024679135_w);
}

TEST(WideInt_sum, short_int_negative) {
    WideInt a = -1_w;
    WideInt b = -2_w;
    EXPECT_EQ(a + b, -3_w);
}

TEST(WideInt_sum, long_int_negative) {
    WideInt a = -12345678901234567890123456789012_w;
    WideInt b = -23456789012345678901234567890123_w;
    EXPECT_EQ(a + b, -35802467913580246791358024679135_w);
}

TEST(WideInt_sum, short_int_mixed) {
    WideInt a = 1_w;
    WideInt b = -2_w;
    EXPECT_EQ(a + b, -1_w);
}

TEST(WideInt_sum, long_int_mixed) {
    WideInt a = 12345678901234567890123456789012_w;
    WideInt b = -23456789012345678901234567890123_w;
    EXPECT_EQ(a + b, -11111110111111111011111111101111_w);
}

TEST(WideInt_sum, short_float) {
    WideInt a = 0.1_w;
    WideInt b = 0.2_w;
    EXPECT_EQ(a + b, 0.3_w);
}

TEST(WideInt_sum, long_float) {
    WideInt a = 0.000000000000000000000000000000001_w;
    WideInt b = 0.000000000000000000000000000000002_w;
    EXPECT_EQ(a + b, 0.000000000000000000000000000000003_w);
}

TEST(WideInt_sum, short_float_negative) {
    WideInt a = -0.1_w;
    WideInt b = -0.2_w;
    EXPECT_EQ(a + b, -0.3_w);
}

TEST(WideInt_sum, long_float_negative) {
    WideInt a = -0.000000000000000000000000000000001_w;
    WideInt b = -0.000000000000000000000000000000002_w;
    EXPECT_EQ(a + b, -0.000000000000000000000000000000003_w);
}

TEST(WideInt_sum, short_float_mixed) {
    WideInt a = 0.1_w;
    WideInt b = -0.2_w;
    EXPECT_EQ(a + b, -0.1_w);
}

TEST(WideInt_sum, long_float_mixed) {
    WideInt a = 0.000000000000000000000000000000001_w;
    WideInt b = -0.000000000000000000000000000000002_w;
    EXPECT_EQ(a + b, -0.000000000000000000000000000000001_w);
}

TEST(WideInt_sum, long_float_diffexp) {
    WideInt a = 0.000000000000001_w;
    WideInt b = 0.000000000000000000000000000000002_w;
    EXPECT_EQ(a + b, 0.000000000000001000000000000000002_w);
}

TEST(WideInt_sum, long_float_diffexp_mixed1) {
    WideInt a = 0.0042546238421_w;
    WideInt b = -0.000000000000054627672300000000045324_w;
    EXPECT_EQ(a + b, 0.004254623842045372327699999999954676_w);
}

TEST(WideInt_sum, long_float_diffexp_mixed2) {
    WideInt a = -0.000000000000001_w;
    WideInt b = 0.000000000000000000000000000000002_w;
    EXPECT_EQ(a + b, -0.000000000000000999999999999999998_w);
}
