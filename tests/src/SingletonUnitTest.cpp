#include "gtest/gtest.h"
#include "Singleton.h"

TEST(SingletonTest, GetCount)
{
	auto singletonAddress = Singleton::GetAddress();

	EXPECT_EQ(0, Singleton::GetCount());
	EXPECT_EQ(singletonAddress, Singleton::GetAddress());
	Singleton::IncrementCount();

	EXPECT_EQ(1, Singleton::GetCount());
	EXPECT_EQ(singletonAddress, Singleton::GetAddress());
	Singleton::IncrementCount();

	EXPECT_EQ(2, Singleton::GetCount());
	EXPECT_EQ(singletonAddress, Singleton::GetAddress());
	Singleton::IncrementCount();
}