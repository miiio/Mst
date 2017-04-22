#include "Edge.h"


Edge::Edge()
{
}

Edge::Edge(int a, int b, int c) :nodeA(a), nodeB(b), value(c)
{
}

bool Edge::operator<(const Edge & other)
{
	return value < other.value;
}
