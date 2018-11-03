#ifndef DIJKSTRA_H
#define DIJKSTRA_H
#pragma once

//void Dijkstra(int graph[9][9], int src);
#include <vector>

class Dijkstra
{
  public:
	Dijkstra(std::vector<std::vector<int>> &graph);
	~Dijkstra();

	void Run(int src);

	int *GetOutput();

  private:
	void Initialization();
	void Clean();

	int GetMinDistanceIndex();

	std::vector<std::vector<int>> &_graph;

	int *_output;
	bool *_isInShortestPath;
};

#endif