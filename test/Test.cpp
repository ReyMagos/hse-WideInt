import WideInt;

#include <stdexcept>
#include <gtest/gtest.h>

void PrintTo(const WideInt &w, std::ostream *os) {
    *os << WideInt::debug_stream << w;
}

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

TEST(WideInt_comp, long_float_diffexp) {
    WideInt a = 1234567890123456789012345.6789012_w;
    WideInt b = 2345678.9012345678901234567890123_w;
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

TEST(WideInt_sum, short_float_carry) {
    WideInt a = 99.99_w;
    WideInt b = 0.01_w;
    EXPECT_EQ(a + b, 100_w);
}

TEST(WideInt_sub, short_float_carry) {
    WideInt a = 100_w;
    WideInt b = 0.01_w;
    EXPECT_EQ(a - b, 99.99_w);
}

/* Multiplication tests '*' */

TEST(WideInt_mul, zero) {
    WideInt a = 0_w;
    WideInt b = 0_w;
    EXPECT_EQ(a * b, 0_w);
}

TEST(WideInt_mul, zero_negative) {
    WideInt a = -0_w;
    WideInt b = -0_w;
    EXPECT_EQ(a * b, 0_w);
}

TEST(WideInt_mul, zero_mixed) {
    WideInt a = 0_w;
    WideInt b = -0_w;
    EXPECT_EQ(a * b, 0_w);
}

TEST(WideInt_mul, zero_and_int) {
    WideInt a = 0_w;
    WideInt b = 1_w;
    EXPECT_EQ(a * b, 0_w);
}

TEST(WideInt_mul, short_int1) {
    WideInt a = 1_w;
    WideInt b = 1_w;
    EXPECT_EQ(a * b, 1_w);
}

TEST(WideInt_mul, short_int2) {
    WideInt a = 2_w;
    WideInt b = 12_w;
    EXPECT_EQ(a * b, 24_w);
}

TEST(WideInt_mul, short_int3) {
    WideInt a = 123_w;
    WideInt b = 235_w;
    EXPECT_EQ(a * b, 28905_w);
}

TEST(WideInt_mul, short_int4) {
    WideInt a = 123456_w;
    WideInt b = 234567_w;
    EXPECT_EQ(a * b, 28958703552_w);
}

TEST(WideInt_mul, long_int2) {
    WideInt a = 12345678901234567890123456789012_w;
    WideInt b = 23456789012345678901234567890123_w;
    EXPECT_EQ(a * b, 289589985200426886037189477355419878723190519984801905209728476_w);
}

TEST(WideInt_mul, long_int_diffexp) {
    WideInt a = 234352_w;
    WideInt b = 7623867867234123765127676127877826764576130000000000000000_w;
    EXPECT_EQ(a * b, 1786668682422051372605201155920424457931945217760000000000000000_w);
}

TEST(WideInt_mul, short_base) {
    WideInt a = 24_w;
    // TODO: Take base from PART_MAX
    WideInt b = 1000000000_w;
    EXPECT_EQ(a * b, 24000000000_w);
}

TEST(WideInt_mul, short_float) {
    WideInt a = 0.2_w;
    WideInt b = 0.2_w;
    EXPECT_EQ(a * b, 0.03_w);
}

/* Division tests '/' */

//TEST(WideInt_div, by_zero) {
//    WideInt a = 1_w;
//    WideInt b = 0_w;
//    EXPECT_THROW(a / b, DivisionByZeroError);
//}

TEST(WideInt_div, div2) {
    WideInt a = 24_w;
    WideInt b = 2_w;
    EXPECT_EQ(a / b, 12_w);
}

TEST(WideInt_div, long_div2) {
    WideInt a = 14234232_w;
    WideInt b = 2_w;
    EXPECT_EQ(a / b, 7117116_w);
}

TEST(WideInt_div, short_float_div2) {
    WideInt a = 1_w;
    WideInt b = 2_w;
    EXPECT_EQ(a / b, 0.5_w);
}

TEST(WideInt_div, long_float_div2) {
    WideInt a = 123423.343_w;
    WideInt b = 2_w;
    EXPECT_EQ(a / b, 61711.6715_w);
}

TEST(WideInt_div, short_int1) {
    WideInt a = 12_w;
    WideInt b = 2_w;
    EXPECT_EQ(a / b, 6_w);
}

TEST(WideInt_div, short_int2) {
    WideInt a = 13_w;
    WideInt b = 2_w;
    EXPECT_EQ(a / b, 6.5_w);
}

//TEST(WideInt_div, short_by_long) {
//    WideInt a = 213_w;
//    WideInt b = 1467_w;
//    EXPECT_EQ(a / b, 0.14519427402862986_w);
//}

//TEST(WideInt_div, long_int) {
//    WideInt a = 971243589643_w;
//    WideInt b = 31_w;
//    EXPECT_EQ(a / b, 31330438375.580647_w);
//}

// 56 / 0
// x / base