#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node(char data = 0);//添加节点，默认值为0
	char m_cData;  //定义节点的数据
	bool m_bIsVisited;//定义节点是否已经被访问过
};
#endif