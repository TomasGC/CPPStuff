#include "gtest/gtest.h"

#include "Polymorphism.h"
#include "Singleton.h"

TEST(PolymorphismTest, InheritanceTest)
{
	Singleton::ClearString();

	Base *a = new ChildA();
	EXPECT_EQ(Singleton::GetString(), "Base ChildA");

	Singleton::ClearString();

	delete a;
	EXPECT_EQ(Singleton::GetString(), "~ChildA ~Base");
}