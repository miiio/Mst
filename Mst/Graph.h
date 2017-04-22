#ifndef GRAPH_H
#define GRAPH_H
#include<qlabel.h>
#include "Edge.h"
#include<vector>
#include<string>
#include<algorithm>
#include<fstream>
#include<Windows.h>
#define maxNodeNum 200
#define INF 0x4fffffff
using namespace std;

class Graph
{
private:
	int f[maxNodeNum];
	int Find(int i); //并查集的查找
	bool Union(int a, int b); //并查集的合并
	bool cmp(const Edge& a, const Edge& b);
	vector<int> v;
public:
	int nodeNum; //点的数量
	int edgeNum; //边的数量
	vector<Edge>* edges; //边集

	Graph();
	Graph(vector<Edge>& edge);

	Graph* getMst_Kruskal();
	Graph* getMst_Prim();
	void show(QLabel* label);
	QString toString();
	int getSum();
};

#endif // GRAPH_H
