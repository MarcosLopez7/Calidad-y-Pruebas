#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class I>
class FixTyped : public testing::Test {

public:
    FixTyped() {
        inst = new I;
    }

protected:
    Base *inst;

};

typedef testing::Types<Child1, Child2> imple;

TYPED_TEST_CASE(FixTyped, imple);

TYPED_TEST(FixTyped, testName) {
    EXPECT_EQ(1, this->inst->doSomething());

}