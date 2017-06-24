#include <stdlib.h>
#include <iostream>
#include "CMap.h"
#include "Node.h"
using namespace std;

/*
��С��������ʾ
1��prim
2��kruskal

         A
      /  |  \
	B  ��F��  E
	  \ / \  /
	   C    D

A  B  C  D  E  F
0  1  2  3  4  5

A-B 6   A-E 5   A-F 1
B-C 3   B-F 2
C-F 8   C-D 7
D-F 4   D-E 2
E-F 9
*/

int main(void)
{
	Node *pNodeA = new Node('A');
	Node *pNodeB = new Node('B');
	Node *pNodeC = new Node('C');
	Node *pNodeD = new Node('D');
	Node *pNodeE = new Node('E');
	Node *pNodeF = new Node('F');

	CMap *pMap = new CMap(6);
	
	pMap->addNode(pNodeA);
	pMap->addNode(pNodeB);
	pMap->addNode(pNodeC);
	pMap->addNode(pNodeD);
	pMap->addNode(pNodeE);
	pMap->addNode(pNodeF);

	pMap->setValueToMatrixForUndirectedGraph(0, 1, 6);
	pMap->setValueToMatrixForUndirectedGraph(0, 4, 5);
	pMap->setValueToMatrixForUndirectedGraph(0, 5, 1);
	pMap->setValueToMatrixForUndirectedGraph(1, 2, 3);
	pMap->setValueToMatrixForUndirectedGraph(1, 5, 2);
	pMap->setValueToMatrixForUndirectedGraph(2, 5, 8);
	pMap->setValueToMatrixForUndirectedGraph(2, 3, 7);
	pMap->setValueToMatrixForUndirectedGraph(3, 5, 4);
	pMap->setValueToMatrixForUndirectedGraph(3, 4, 2);
	pMap->setValueToMatrixForUndirectedGraph(4, 5, 9);

	//pMap->primTree(0);
	pMap->kruskalTree();
	
	system("pause");
	return 0;
}