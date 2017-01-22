#include "gtest/gtest.h"
#include <calculator.h>

TEST(cpp_add_test, check_equal_int){
    using pp::Calculator;
    Calculator<int> cal;
    EXPECT_EQ(cal.add(2, 1), 3);
}


