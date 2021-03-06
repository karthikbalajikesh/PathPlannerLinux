#pragma once
#include "PRM.h"

class Dijkstra :
	public PRM
{	
	vector<GraphNode> Pathway;
public:
	double PathDistance;
	int width, height;
	// constructor
	Dijkstra(pair<double,double> destination,int numIterations = 100, int zmax = 1, int xmax = 2,
		int cellWidth = 10, int CellHeight = 10, int neighbours = 3, cood_vector coordinates = {});
	void addDestination(pair<double,double>& dest);
	vector<GraphNode> shortestPath(); // will get the shortest path between node 0 and last node
	void relaxNode(Queue& minHeap, int& currentIndex, double& currentDistnce, 
	vector<double>& distance_from_Source, vector<int>& previousNode);
	vector<GraphNode> retrievePath(vector<int>& previoius);
	// function to print the node coordinates of the path
	void PrintPathDetails();

};

