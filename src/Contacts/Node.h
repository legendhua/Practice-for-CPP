#ifndef NODE_H
#define NODE_H

#include "Person.h"

class Node
{
public:
	Person data;//便于赋值，写到public下面
	Node *next;
	void printNode();
};
#endif