#ifndef NODE_H
#define NODE_H

class Node
{
public:
	int data;//便于赋值，写到public下面
	Node *next;
	void printNode();
};
#endif