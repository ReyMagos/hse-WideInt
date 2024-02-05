import WideInt;

#include <gtest/gtest.h>

// short - single part
// long - multi part
// TODO: Add random to tests

TEST(WideInt, eq_zero) {
    WideInt a = 0_w;
    WideInt b = 0_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_short_int) {
    WideInt a = 1_w;
    WideInt b = 1_w;
	EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_long_int) {
    WideInt a = 12345678901234567890123456789_w;
    WideInt b = 12345678901234567890123456789_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_short_int_trailing_zeros) {
    WideInt a = 100000000_w;
    WideInt b = 100000000_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_long_int_trailing_zeros) {
    WideInt a = 10000000000000000000000000000_w;
    WideInt b = 10000000000000000000000000000_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_short_float) {
    WideInt a = 1.1_w;
    WideInt b = 1.1_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_long_float) {
    WideInt a = 1234567890123456789.1234567890123456789_w;
    WideInt b = 1234567890123456789.1234567890123456789_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_short_float_leading_zeros) {
    WideInt a = 0.0000000001_w;
    WideInt b = 0.0000000001_w;
    EXPECT_TRUE(a == b);
}

TEST(WideInt, eq_long_float_leading_zeros) {
    WideInt a = 0.00000000000000000000000000001_w;
    WideInt b = 0.00000000000000000000000000001_w;
    EXPECT_TRUE(a == b);
}

// Тест с перехватом cin и cout
//TEST(Hello, print_name)
//{
//    std::istringstream input_stream("World");
//    std::streambuf* original_in_buf = std::cin.rdbuf();
//    std::cin.rdbuf(input_stream.rdbuf());      // Redirect cin
//
//    std::stringstream output_stream;
//    std::streambuf *original_out_buf = std::cout.rdbuf();
//    std::cout.rdbuf(output_stream.rdbuf());    // Redirect cout to our output_stream
//
//    print_hello();
//
//    std::cout.rdbuf(original_out_buf);              // Redirect cout to its old self
//    std::cin.rdbuf(original_in_buf);    // Redirect cin back to its old self
//
//    EXPECT_EQ(output_stream.str(), "Hello, World\n");
//}

