#include "Tree.h"


Tree::Tree()
{
	m_pRoot = new Node();
}

Tree::~Tree()
{
	DeleteNode(0, NULL);
	//m_pRoot->DeleteNode();//这种方法也行，销毁根节点
}

Node *Tree::SearchNode(int nodeIndex)
{
	return m_pRoot->SearchNode(nodeIndex);
}

bool Tree::AddNode(int nodeIndex, int direction, Node *pNode)
{
	Node *temp = SearchNode(nodeIndex);
	if (temp==NULL)
	{
		return false;
	}
	//新开辟空间存放要传入的数据，防止外部将pNode删除以后造成的错误
	Node *node = new Node();
	if (node==NULL)
	{
		return false;
	}
	node->index = pNode->index;
	node->data = pNode->data;
	node->pParent = temp;

	if (direction==0)
	{
		temp->pLChild = node;
	}
	if (direction==1)
	{
		temp->pRChild = node;
	}
	return true;
}

bool Tree::DeleteNode(int nodeIndex, Node *pNode)
{
	Node *temp = SearchNode(nodeIndex);
	if (temp == NULL)
	{
		return false;
	}
	if (pNode!=NULL)
	{
		pNode->data = temp->data;
	}
	temp->DeleteNode();
	return true;
}

void Tree::PreorderTraversal()
{
	m_pRoot->PreorderTraversal();
}

void Tree::InorderTraversal()
{
	m_pRoot->InorderTraversal();
}

void Tree::PostorderTraversal()
{
	m_pRoot->PostorderTraversal();
}