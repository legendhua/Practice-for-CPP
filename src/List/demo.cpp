#include <stdlib.h>
#include "List.h"
#include <iostream>
using namespace std;

int main(void)
{
	Node node1;
	node1.data = 3;
	Node node2;
	node2.data = 4;
	Node node3;
	node3.data = 5;
	List *pList = new List();

	pList->ListInsertHead(&node1);
	pList->ListInsertHead(&node2);
	pList->ListInsert(1, &node3);
	pList->PriorElem(&node1, &node2);
	cout << node2.data << endl;
	/*Node node4;
	pList->ListDelete(0, &node4);
	cout << node4.data << endl;
	pList->CLearList();*/
	pList->ListTraverse();

	delete pList;
	pList = NULL;
	system("pause");
	return 0;
}