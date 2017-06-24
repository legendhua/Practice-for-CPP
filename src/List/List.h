#ifndef LIST_H
#define LIST_H
#include "Node.h"

class List
{
public:
	List();//不需要定义容量(与顺序表的区别)
	~List();
	void CLearList();//比较麻烦
	bool ListEmpty();
	int ListLength();
	bool GetElem(int i, Node *pNode);
	int LocateElem(Node *pNode);
	bool PriorElem(Node *pCurrentNode, Node *pPreNode);
	bool NextElem(Node *pCurrentNode, Node *pNextNode);
	void ListTraverse();
	bool ListInsert(int i, Node *pNode);//从任意位置插入
	bool ListDelete(int i, Node *pNode);
	bool ListInsertHead(Node *pNode);//从头插入
	bool ListInserttail(Node *pNode);//从尾部插入
private:
	Node *m_pList;//头结点,只是用来指向将来插入的第一个结点,头结点的数据域并没有任何意义
	int m_iLength;
};
#endif