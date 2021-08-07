#include "sublib1/sublib1.h"
#include "gtest/gtest.h"

TEST(Sublib1_returnTrue, ThisIsTestName) {
  sublib1 obj;
  EXPECT_EQ(true, obj.returnTrue() );
  EXPECT_EQ(1, 0);
}

