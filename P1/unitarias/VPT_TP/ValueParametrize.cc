#include "gtest/gtest.h"
#include "functions.h"

class FixValParam: public testing::TestWithParam<int>
{
public:
    void SetUp(){}
    void TearDown(){}
};

TEST_P(FixValParam, Even) {
    if(GetParam() % 2 == 0)
        EXPECT_EQ(true, isEven(GetParam() ) );
    else
        EXPECT_EQ(false, isEven(GetParam() ) );

}

TEST_P(FixValParam, Odd) {
    if(GetParam() % 2 != 0)
        EXPECT_EQ(true, isOdd(GetParam() ) );
    else
        EXPECT_EQ(false, isOdd(GetParam() ) );
}

//INSTANTIATE_TEST_CASE_P(vals, FixValParam, testing::Values(2, 4, 6, 8));

int array[] = {2, 4, 6, 8, 1, 4, 6, 7, 9};
INSTANTIATE_TEST_CASE_P(vals, FixValParam, testing::ValuesIn(array));