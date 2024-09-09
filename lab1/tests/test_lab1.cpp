#include <gtest/gtest.h>
#include "../include/lab1.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(lab1_var15(2, 7) == 6);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(lab1_var15(10, 50) == 50);
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(lab1_var15(42, 2024) == 2016);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(lab1_var15(177, 55555555) == 55555521);
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}