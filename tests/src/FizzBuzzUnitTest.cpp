#include "gtest/gtest.h"
#include "FizzBuzz.h"

TEST(FizzBuzzTest, getIDPlayer)
{
  EXPECT_EQ ("Fizz", GetFizzBuzz(3));
  EXPECT_EQ ("Buzz", GetFizzBuzz(5));
  EXPECT_EQ ("1", GetFizzBuzz(1));
  EXPECT_EQ ("FizzBuzz", GetFizzBuzz(15));
}