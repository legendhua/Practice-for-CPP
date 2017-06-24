#ifndef CMAP_H
#define CMAP_H
#include "Node.h"
#include <vector>
using namespace std;

class CMap
{
public:
	CMap(int capacity);
	~CMap();
	bool addNode(Node *pNode);//��ͼ����ӽڵ�
	void resetNode();//���ýڵ�
	bool setValueToMatrixForDirectedGraph(int row, int col, int val = 1);  //Ϊ����ͼ�����ڽӾ���
	bool setValueToMatrixForUndirectedGraph(int row, int col, int val = 1); //Ϊ����ͼ�����ڽӾ���
	void printMatrix();//��ӡ�ڽӾ���
	void depthFirstTraverse(int nodeIndex);//������ȱ���
	void breadthFirstTraverse(int nodeIndex);//������ȱ���
private:
	bool getValueFromMatrix(int row, int col, int &val);//�Ӿ����л�ȡȨֵ
	void breadthFirstTraverseImpl(vector<int> preVec);//������ȱ���ʵ�ֺ���
private:
	int m_iCapacity;     //ͼ�����������ɵĶ�����
	int m_iNodeCount;    //�Ѿ���ӵĽڵ����
	Node *m_pNodeArray;  //������Ŷ�������
	int *m_pMatrix;      //��������ڽӾ���
};
#endif