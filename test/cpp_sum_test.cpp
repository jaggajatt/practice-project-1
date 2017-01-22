#include "gtest/gtest.h"
#include <sum.h>

TEST(cpp_sum_test, check_equal_int){
    using pp::Sum;
    Sum<int> sum;
    EXPECT_EQ(sum.add(2, 1), 3);
}


