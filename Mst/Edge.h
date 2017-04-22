#ifndef EDGE_H
#define EDGE_H

class Edge
{
public:
	int nodeA;
	int nodeB;
	int value;
	Edge();
	Edge(int a, int b, int c);
	bool operator <(const Edge& other);
};

#endif // EDGE_H
