#include <stdlib.h>
#include "Tree.h"
#include <iostream>
using namespace std;

/**************************************************/
/*�������������ʾ��


�γ�Ҫ��������Ļ�������
1�����Ĵ���������
2�����нڵ������
3�����нڵ�������ɾ��
4�����нڵ�ı���

          3(0)
	5(1)         8(2)
2(3)    6(4)   9(5)   7(6)

*/

int main(void)
{
	int root = 3;  //������ڵ�
	Tree *pTree = new Tree(10,&root);
	int node1 = 5;
	int node2 = 8;
	pTree->AddNode(0, 0, &node1);
	pTree->AddNode(0, 1, &node2);

	int node3 = 2;
	int node4 = 6;
	pTree->AddNode(1, 0, &node3);
	pTree->AddNode(1, 1, &node4);

	int node5 = 9;
	int node6 = 7;
	pTree->AddNode(2, 0, &node5);
	pTree->AddNode(2, 1, &node6);

	pTree->TreeTraverse();

	cout <<endl<< *(pTree->SearchNode(2)) << endl;

	int node7;
	pTree->DeleteNode(5, &node7);
	pTree->TreeTraverse();

	delete pTree;
	pTree = NULL;

	system("pause");
	return 0;
}
