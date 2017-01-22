#include "gtest/gtest.h"
#include <calculator.h>

// Test for integer addition
TEST(cpp_add_test, check_equal_int){
    using pp::Calculator;
    Calculator<int> cal;
    EXPECT_EQ(cal.add(2, 1), 3);
}

// Test for double addition
TEST(cpp_add_test, check_near_double){
    using pp::Calculator;
    Calculator<double> cal;
    EXPECT_NEAR(0, cal.add(0.000001, 0), 0.0001);
}

// Test for integer subtraction
TEST(cpp_subtract_test, check_equal_int){
    using pp::Calculator;
    Calculator<int> cal;
    EXPECT_EQ(cal.subtract(2, 1), 1);
}

// Test for double subtraction
TEST(cpp_subtract_test, check_near_double){
    using pp::Calculator;
    Calculator<double> cal;
    EXPECT_NEAR(0, cal.subtract(2.000001, 2), 0.0001);
}

// Test for int multiplication
TEST(cpp_mul_test, check_equal_int){
    using pp::Calculator;
    Calculator<int> cal;
    EXPECT_EQ(cal.mul(2, 3), 6);	
}

// Test for double multiplication
TEST(cpp_mul_test, check_near_double){
    using pp::Calculator;
    Calculator<double> cal;
    EXPECT_NEAR(6, cal.mul(2.000001, 3), 0.0001);
}

// Test for int division
TEST(cpp_divide_test, check_equal_int){
    using pp::Calculator;
    Calculator<int> cal;
    EXPECT_EQ(cal.divide(6, 3), 2);	
}

// Test for double division
TEST(cpp_divide_test, check_near_double){
    using pp::Calculator;
    Calculator<double> cal;
    EXPECT_NEAR(2, cal.divide(6.000001, 3), 0.0001);
}

// Test for int division
TEST(cpp_divide_test, check_div_zero){
    using pp::Calculator;
    Calculator<double> cal;
    std::cout << cal.divide(0, 0);
    EXPECT_EQ(cal.divide(3, 0), std::numeric_limits<double>::infinity());	
}