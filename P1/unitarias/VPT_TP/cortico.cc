#include "gtest/gtest.h"
#include "../TypedTest/Hierarchie.h"

typedef  Base *factoryMethod();

Base *iWDC1(){
    return new Child1();
}

Base *iWDC2(){
    return new Child2();
}

template <int p>
Base *iWDC() {
    return new Child3(p);
}

class Fixture : public testing::TestWithParam<factoryMethod *> {
protected:
    Base *inst2;
public:
    void SetUp() {
        inst2 =(*GetParam())();
    }

    void TearDown() {

    }

};

TEST_P(Fixture, testName) {
    this->inst2->doSomething();
}

INSTANTIATE_TEST_CASE_P(CaseName, Fixture, testing::Values(&iWDC1, &iWDC2, &iWDC<10>));