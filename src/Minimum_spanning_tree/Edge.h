#ifndef EDGE_H
#define EDGE_H

class Edge
{
public:
	Edge(int nodeIndexA=0,int nodeIndexB=0,int weightValue=0);
	int m_iNodeIndexA;
	int m_iNodeIndexB;
	int m_iWeightValue;
	bool m_bSelected;
};

#endif