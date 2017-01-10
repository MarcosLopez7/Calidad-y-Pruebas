#include "first.cc"
#include "../../googletest/googletest/include/gtest/gtest.h"

TEST(Cancer, positivos){

	ASSERT_EQ(1, cancer(1, 1));
	ASSERT_EQ(120, cancer(5, 1));

}


TEST(Cancer, negativos){
	ASSERT_EQ(1, cancer(-4, 1));
}

