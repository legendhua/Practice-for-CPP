#ifndef TREE_H
#define TREE_H

class Tree
{
public:
	Tree(int size,int *pRoot);   //��������pRootΪ���ڵ�
	~Tree();          //������
	int *SearchNode(int nodeIndex);   //��������Ѱ�ҽڵ�
	bool AddNode(int nodeIndex, int direction, int *pNode);//��ӽڵ㣨��ĳ�����ڵ���������ӽڵ㣩
	bool DeleteNode(int nodeIndex, int *pNode);   //ɾ���ڵ�
	void TreeTraverse();
private:
	int *m_pTree;
	int m_iSize;
};

#endif