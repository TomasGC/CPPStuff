#include "gtest/gtest.h"

#include "Observer.h"

TEST(ObserverTest, GetState)
{
	Subject subj;
	ViewOne v1(subj);
	ViewTwo v2(subj);

	std::ostringstream os;
	subj.SetState(14, os);

	EXPECT_EQ(os.str(), "State of ViewOne: 14 State of ViewTwo: 14");
}