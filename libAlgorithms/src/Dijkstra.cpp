#include <iostream>

#include "Dijkstra.h"

#include <stdio.h>
#include <limits.h>

Dijkstra::Dijkstra(std::vector<std::vector<int>> &graph) : _graph(graph)
{
	Initialization();
}

Dijkstra::~Dijkstra()
{
	Clean();
}

void Dijkstra::Clean()
{
	if (_output == NULL)
	{
		delete[] _output;
	}

	if (_isInShortestPath == NULL)
	{
		delete[] _isInShortestPath;
	}
}

void Dijkstra::Initialization()
{
	_output = new int[_graph.size()];
	_isInShortestPath = new bool[_graph.size()];

	for (int i = 0; i < _graph.size(); i++)
	{
		_output[i] = INT_MAX;
		_isInShortestPath[i] = false;
	}
}

void Dijkstra::Run(int src)
{
	Clean();

	Initialization();

	_output[src] = 0;

	for (int i = 0; i < _graph.size() - 1; ++i)
	{
		int minIndex = GetMinDistanceIndex();

		_isInShortestPath[minIndex] = true;

		for (int j = 0; j < _graph[i].size(); ++j)
		{
			bool isNotInfinit = _output[minIndex] != INT_MAX;
			int sumDistances = _output[minIndex] + _graph[minIndex][j];
			bool isDistanceSmaller = sumDistances < _output[j];

			if (!_isInShortestPath[j] && _graph[minIndex][j] && isNotInfinit && isDistanceSmaller)
			{
				_output[j] = sumDistances;
			}
		}
	}
}

int Dijkstra::GetMinDistanceIndex()
{
	int min = INT_MAX;
	int minIndex = -1;

	for (int i = 0; i < _graph.size(); ++i)
	{
		if (!_isInShortestPath[i] && (_output[i] <= min))
		{
			min = _output[i];
			minIndex = i;
		}
	}

	return minIndex;
}

int *Dijkstra::GetOutput()
{
	return _output;
}