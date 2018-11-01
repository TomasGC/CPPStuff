#include "gtest/gtest.h"
#include "Polymorphism.h"
#include "Factory.h"

TEST(FactoryTest, GetType)
{
	IBase* a = Factory::CreateFObject(A);
	EXPECT_EQ (A, a->GetType());

	IBase* b = Factory::CreateFObject(B);
	EXPECT_EQ (B, b->GetType());

	IBase* c = Factory::CreateFObject(C);
	EXPECT_EQ (C, c->GetType());
}