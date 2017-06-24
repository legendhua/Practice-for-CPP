#ifndef LIST_H
#define LIST_H
#include "Node.h"

class List
{
public:
	List();//����Ҫ��������(��˳��������)
	~List();
	void CLearList();//�Ƚ��鷳
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, Node *pNode);
	int LocateElem(Node *pNode);
	bool PriorElem(Node *pCurrentNode, Node *pPreNode);
	bool NextElem(Node *pCurrentNode, Node *pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node *pNode);//������λ�ò���
	bool ListDelete(int i, Node *pNode);
	bool ListInsertHead(Node *pNode);//��ͷ����
	bool ListInserttail(Node *pNode);//��β������
private:
	Node *m_pList;//ͷ���,ֻ������ָ��������ĵ�һ�����,ͷ����������û���κ�����
	int m_iLength;
};
#endif