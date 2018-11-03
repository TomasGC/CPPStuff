#include "gtest/gtest.h"
#include "Polymorphism.h"
#include "Factory.h"

TEST(FactoryTest, GetType)
{
	Base *a = Factory::CreateFObject(A);
	EXPECT_EQ(A, a->GetType());
	delete a;

	Base *b = Factory::CreateFObject(B);
	EXPECT_EQ(B, b->GetType());
	delete b;

	Base *c = Factory::CreateFObject(C);
	EXPECT_EQ(C, c->GetType());
	delete c;
}