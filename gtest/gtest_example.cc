#include <gtest/gtest.h>
#include <iostream>
using namespace std;
// g++ -o gtest_example gtest_example.cc -lgtest -lpthread
class DEMO : public testing::Test{

};

int sum(int a, int b) {
    return a + b;
}

TEST_F(DEMO, gtest_test_sum) {
    int a = 12;
    EXPECT_EQ(sum(1, 2), 3);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}