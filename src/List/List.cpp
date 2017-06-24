#include "List.h"
#include <iostream>
using namespace std;

List::List()
{
	m_pList = new Node;//头结点的指针,只是用来指向将来插入的第一个结点,头结点的数据域并没有任何意义
	m_pList->data = 0;
	m_pList->next = NULL;
	m_iLength = 0;
}

List::~List()
{
	//申请的头结点也释放掉
	CLearList();
	delete m_pList;
	m_pList = NULL;
}

void List::CLearList()
{
	//头结点后面的节点都释放掉
	Node *currentNode = m_pList->next;
	while (currentNode!=NULL)
	{
		Node *temp = currentNode->next;
		delete currentNode;
		currentNode = temp;
	}
	m_pList->next = NULL;//恢复成初始状态
}

bool List::ListEmpty()
{
	if (m_iLength == 0)
	{
		return true;
	}
	else
		return false;
}

int List::ListLength()
{
	return m_iLength;
}

bool List::GetElem(int i, Node *pNode)
{
	if (i < 0 || i >= m_iLength)
	{
		return false;
	}
	Node *currentNode = m_pList;
	for (int k = 0; k <= i; k++)
	{
		currentNode = currentNode->next;
	}
	pNode->data = currentNode->data;
	return true;
}

int List::LocateElem(Node *pNode)
{
	Node *currentNode = m_pList;
	int count = 0;
	while (currentNode->next!=NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pNode->data)
		{
			return count;
		}
		count++;
	}
	return -1;
}

bool List::PriorElem(Node *pCurrentNode, Node *pPreNode)
{
	Node *currentNode = m_pList;
	Node *tempNode = NULL;
	while (currentNode->next != NULL)
	{
		tempNode = currentNode;
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (tempNode==m_pList)
			{
				return false;
			}
			pPreNode->data = tempNode->data;
			return true;
		}
	}
	return false;
}

bool List::NextElem(Node *pCurrentNode, Node *pNextNode)
{
	Node *currentNode = m_pList;
	while (currentNode->next != NULL)
	{
		currentNode = currentNode->next;
		if (currentNode->data == pCurrentNode->data)
		{
			if (currentNode->next == NULL)
			{
				return false;
			}
			pNextNode->data = currentNode->next->data;
			return true;
		}
	}
	return false;
}

void List::ListTraverse()
{
	Node *currentNode = m_pList;
	while (currentNode->next!=NULL)
	{
		currentNode = currentNode->next;
		currentNode->printNode();
	}
}

bool List::ListInsert(int i, Node *pNode)
{
	//如果i为0，定义为插入到head的后面
	//如果i为m_iLength，定义为插入到tail的后面
	if (i<0||i>m_iLength)
	{
		return false;
	}
	Node *currentNode = m_pList;
	for (int k=0;k<i;k++)
	{
		currentNode = currentNode->next;
	}
	Node *newNode = new Node;
	if (newNode==NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = currentNode->next;
	currentNode->next = newNode;
	m_iLength++;
	return true;
}

bool List::ListDelete(int i, Node *pNode)
{
	if (i<0 || i>=m_iLength)
	{
		return false;
	}
	Node *currentNode = m_pList;
	Node *currentNodeBefore = NULL;
	for (int k = 0; k <= i; k++)
	{
		currentNodeBefore = currentNode;
		currentNode = currentNode->next;
	}
	currentNodeBefore->next = currentNode->next;
	pNode->data = currentNode->data;
	delete currentNode;
	currentNode = NULL;
	m_iLength--;
	return true;
}

bool List::ListInsertHead(Node *pNode)
{
	Node *temp=m_pList->next;
	Node *newNode = new Node;
	if (newNode==NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = temp;
	m_pList->next = newNode;
	m_iLength++;
	return true;
}

bool List::ListInserttail(Node *pNode)
{
	Node *currentNode = m_pList;
	while (currentNode->next!=NULL)//找到最后一个结点
	{
		currentNode = currentNode->next;
	}
	Node *newNode = new Node;
	if (newNode==NULL)
	{
		return false;
	}
	newNode->data = pNode->data;
	newNode->next = NULL;
	currentNode->next = newNode;
	m_iLength++;
	return true;
}