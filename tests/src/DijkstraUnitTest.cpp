#include "gtest/gtest.h"

#include "Dijkstra.h"

TEST(DijkstraTest, SquaredMatrix)
{
	std::vector<std::vector<int>> graph = {{0, 85, 217, 0, 173, 0, 0, 0, 0, 0},
										   {85, 0, 0, 0, 0, 80, 0, 0, 0, 0},
										   {217, 0, 0, 0, 0, 0, 186, 103, 0, 0},
										   {0, 0, 0, 0, 0, 0, 0, 183, 0, 0},
										   {173, 0, 0, 0, 0, 0, 0, 0, 0, 502},
										   {0, 80, 0, 0, 0, 0, 0, 0, 250, 0},
										   {0, 0, 186, 0, 0, 0, 0, 0, 0, 0},
										   {0, 0, 103, 183, 0, 0, 0, 0, 0, 167},
										   {0, 0, 0, 0, 0, 250, 0, 0, 0, 84},
										   {0, 0, 0, 0, 502, 0, 0, 167, 84, 0}};

	Dijkstra d(graph);
	d.Run(0);

	EXPECT_EQ(d.GetOutput()[0], 0);
	EXPECT_EQ(d.GetOutput()[1], 85);
	EXPECT_EQ(d.GetOutput()[2], 217);
	EXPECT_EQ(d.GetOutput()[3], 503);
	EXPECT_EQ(d.GetOutput()[4], 173);
	EXPECT_EQ(d.GetOutput()[5], 165);
	EXPECT_EQ(d.GetOutput()[6], 403);
	EXPECT_EQ(d.GetOutput()[7], 320);
	EXPECT_EQ(d.GetOutput()[8], 415);
	EXPECT_EQ(d.GetOutput()[9], 487);
}

TEST(DijkstraTest, NotSquaredMatrix)
{
	std::vector<std::vector<int>> graph = {{0, 85, 217, 0, 173, 0, 0, 0, 0, 0},
										   {85, 0, 0, 0, 0, 80, 0, 0, 0, 0},
										   {217, 0, 0, 0, 0, 0, 186, 103, 0, 0},
										   {0, 0, 0, 0, 0, 0, 0, 183, 0, 0},
										   {173, 0, 0, 0, 0, 0, 0, 0, 0, 502},
										   {0, 80, 0, 0, 0, 0, 0, 0, 250, 0},
										   {0, 0, 186, 0, 0, 0, 0, 0, 0, 0},
										   {0, 0, 103, 183, 0, 0, 0, 0, 0, 167}};
	Dijkstra d(graph);
	d.Run(0);

	EXPECT_EQ(d.GetOutput()[0], 0);
	EXPECT_EQ(d.GetOutput()[1], 85);
	EXPECT_EQ(d.GetOutput()[2], 217);
	EXPECT_EQ(d.GetOutput()[3], 503);
	EXPECT_EQ(d.GetOutput()[4], 173);
	EXPECT_EQ(d.GetOutput()[5], 165);
	EXPECT_EQ(d.GetOutput()[6], 403);
	EXPECT_EQ(d.GetOutput()[7], 320);
}