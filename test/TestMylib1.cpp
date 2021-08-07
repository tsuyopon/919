#include "mylib1.h"
#include "gtest/gtest.h"

TEST(mylib1_returnTrue, Mylib1TestSample) {
  mylib1 obj;
  EXPECT_EQ(true, obj.returnTrue() );
}

