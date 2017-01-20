#include "gtest/gtest.h"
#include "Hierarchie.h"

template <class T>
Base *factoryMethod() {
    return new T;
}

template <>
Base *factoryMethod<Child3>() {
    return new Child3(10);
}

template <class T>
class FixTyped : public testing::Test {

public:
    FixTyped() : inst(factoryMethod<T>()){}

protected:
    Base *inst;

};

typedef testing::Types<Child1, Child2, Child3> imple;

TYPED_TEST_CASE(FixTyped, imple);

TYPED_TEST(FixTyped, testName) {
EXPECT_EQ(1, this->inst->doSomething());

}

