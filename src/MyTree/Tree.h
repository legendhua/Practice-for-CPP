#ifndef TREE_H
#define TREE_H

class Tree
{
public:
	Tree(int size,int *pRoot);   //创建树，pRoot为根节点
	~Tree();          //销毁树
	int *SearchNode(int nodeIndex);   //根据索引寻找节点
	bool AddNode(int nodeIndex, int direction, int *pNode);//添加节点（在某个父节点下面添加子节点）
	bool DeleteNode(int nodeIndex, int *pNode);   //删除节点
	void TreeTraverse();
private:
	int *m_pTree;
	int m_iSize;
};

#endif