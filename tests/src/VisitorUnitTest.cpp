#include "gtest/gtest.h"

#include "Polymorphism.h"
#include "Visitor.h"

TEST(VisitorTest, GetValue)
{
	Visitor v;

	IBase* a = new ChildA();
	EXPECT_EQ (0, a->GetValue());
	a->Accept(v);
	EXPECT_EQ (1, a->GetValue());

	IBase* b = new ChildB();
	b->Accept(v);
	EXPECT_EQ (2, b->GetValue());

	IBase* c = new ChildC();
	c->Accept(v);
	EXPECT_EQ (3, c->GetValue());
}