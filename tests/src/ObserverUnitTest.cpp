#include "gtest/gtest.h"

#include "Observer.h"
#include "Singleton.h"

TEST(ObserverTest, GetState)
{
	Subject subj;
	ViewOne v1(subj);
	ViewTwo v2(subj);

	Singleton::ClearString();

	subj.SetState(14);

	EXPECT_EQ(Singleton::GetString(), "State of ViewOne: 14 State of ViewTwo: 14.");
}