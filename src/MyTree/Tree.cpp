#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree(int size, int *pRoot)
{
	m_pTree = new int[size];
	m_iSize = size;
	for (int i=0;i<size;i++)  //初始化为0，表示当前的位置中不存在节点。树中节点本身的值不考虑为0
	{
		m_pTree[i] = 0;
	}
	m_pTree[0] = *pRoot;
}

Tree::~Tree()
{
	delete[]m_pTree;
	m_pTree = NULL;
}

int *Tree::SearchNode(int nodeIndex)
{
	if (nodeIndex<0||nodeIndex>=m_iSize)
	{
		return NULL;
	}
	if (m_pTree[nodeIndex]==0)
	{
		return NULL;
	}
	return &m_pTree[nodeIndex];
}

bool Tree::AddNode(int nodeIndex, int direction, int *pNode)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)//父节点是否存在
	{
		return false;
	}
	if (m_pTree[nodeIndex] == 0)
	{
		return false;
	}
	
	if (direction==0)
	{
		if (nodeIndex*2+1 < 0 || nodeIndex*2+1 >= m_iSize)
		{
			return false;
		}
		if (m_pTree[nodeIndex*2+1] != 0)//节点已有数据，不能插入
		{
			return false;
		}
		m_pTree[nodeIndex * 2 + 1] = *pNode;
	}
	if (direction == 1)
	{
		if (nodeIndex * 2 + 2 < 0 || nodeIndex * 2 + 2 >= m_iSize)//其中前一项没有意义，不写也行
		{
			return false;
		}
		if (m_pTree[nodeIndex * 2 + 2] != 0)//节点已有数据，不能插入
		{
			return false;
		}
		m_pTree[nodeIndex * 2 + 2] = *pNode;
	}
	return true;
}
bool Tree::DeleteNode(int nodeIndex, int *pNode)
{
	if (nodeIndex < 0 || nodeIndex >= m_iSize)
	{
		return false;
	}
	if (m_pTree[nodeIndex] == 0)
	{
		return false;
	}
	*pNode = m_pTree[nodeIndex];
	m_pTree[nodeIndex] = 0;

	return true;
}
void Tree::TreeTraverse()
{
	for (int i=0;i<m_iSize;i++)
	{
		cout << m_pTree[i] << " ";
	}
}