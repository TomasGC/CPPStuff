#include "gtest/gtest.h"
#include "Singleton.h"

TEST(SingletonTest, GetCount)
{
	EXPECT_EQ (0, Singleton::GetCount());
	Singleton::IncrementCount();

  	EXPECT_EQ (1, Singleton::GetCount());
	Singleton::IncrementCount();

	EXPECT_EQ (2, Singleton::GetCount());
	Singleton::IncrementCount();
}