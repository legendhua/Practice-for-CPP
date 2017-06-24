#include "CMap.h"
#include <iostream>
using namespace std;

CMap::CMap(int capacity)
{
	m_iCapacity = capacity;
	m_iNodeCount = 0;
	m_pNodeArray = new Node[m_iCapacity];
	m_pMatrix = new int[m_iCapacity*m_iCapacity];
	memset(m_pMatrix, 0, m_iCapacity*m_iCapacity * sizeof(int));  //��ʼ���ڽӾ���Ϊ0
	/*��ͬ�������ķ���
	 for (int i = 0; i < m_iCapacity*m_iCapacity; i++)
	 {
	 m_pMatrix[i] = 0;
	 }
	 */
	m_pEdge = new Edge[m_iCapacity - 1];//������С�������ߵļ��ϣ���С�������ߵĸ���Ϊ����-1
}

CMap::~CMap()
{
	delete[]m_pNodeArray;
	delete[]m_pMatrix;
	delete[]m_pEdge;
}

bool CMap::addNode(Node *pNode)
{
	if (pNode == NULL)
	{
		return false;
	}
	//�������ݲ��ܽ�ָ�봫��ȥ����Ӧ�ý���ֵ��ֵ����Ϊ���ⲿ����ָ���𻵣��ڲ��������
	m_pNodeArray[m_iNodeCount].m_cData = pNode->m_cData;

	m_iNodeCount++;
	return true;
}

void CMap::resetNode()
{
	for (int i = 0; i<m_iNodeCount; i++)
	{
		m_pNodeArray[i].m_bIsVisited = false;
	}
}

bool CMap::setValueToMatrixForDirectedGraph(int row, int col, int val) //Ϊ����ͼ�����ڽӾ���
{
	if (row<0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	m_pMatrix[row*m_iCapacity + col] = val;
	return true;
}

bool CMap::setValueToMatrixForUndirectedGraph(int row, int col, int val) //Ϊ����ͼ�����ڽӾ���
{
	if (row < 0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	m_pMatrix[row*m_iCapacity + col] = val;//����ͼ�ڽӾ���Ϊ�Գƾ���
	m_pMatrix[col*m_iCapacity + row] = val;
	return true;
}

bool CMap::getValueFromMatrix(int row, int col, int &val)//�Ӿ����л�ȡȨֵ
{
	if (row < 0 || row >= m_iCapacity)
	{
		return false;
	}
	if (col < 0 || col >= m_iCapacity)
	{
		return false;
	}
	val = m_pMatrix[row*m_iCapacity + col];
	return true;
}

void CMap::printMatrix()//��ӡ�ڽӾ���
{
	for (int i = 0; i<m_iCapacity; i++)
	{
		for (int j = 0; j<m_iCapacity; j++)
		{
			cout << m_pMatrix[i*m_iCapacity + j] << " ";
		}
		cout << endl;
	}
}

void CMap::depthFirstTraverse(int nodeIndex)//������ȱ���,����ͼ
{
	int value = 0;
	cout << m_pNodeArray[nodeIndex].m_cData << " ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;
	for (int i = 0; i<m_iCapacity; i++)
	{
		getValueFromMatrix(nodeIndex, i, value);
		if (value != 0)
		{
			if (m_pNodeArray[i].m_bIsVisited)//ÿ���ڵ����һ��
			{
				continue;
			}
			else
			{
				depthFirstTraverse(i);
			}
		}
		else
		{
			continue;
		}
	}
}

void CMap::breadthFirstTraverse(int nodeIndex)//������ȱ���
{
	cout << m_pNodeArray[nodeIndex].m_cData << " ";
	m_pNodeArray[nodeIndex].m_bIsVisited = true;

	vector<int> curVec;
	curVec.push_back(nodeIndex);

	breadthFirstTraverseImpl(curVec);
}


void CMap::breadthFirstTraverseImpl(vector<int> preVec)//������ȱ���ʵ�ֺ���(implement)
{
	int value = 0;
	vector<int> curVec;
	for (int j = 0; j<int(preVec.size()); j++)
	{
		for (int i = 0; i<m_iCapacity; i++)
		{
			getValueFromMatrix(preVec[j], i, value);
			if (value != 0)
			{
				if (m_pNodeArray[i].m_bIsVisited)//ÿ���ڵ����һ��
				{
					continue;
				}
				else
				{
					cout << m_pNodeArray[i].m_cData << " ";
					m_pNodeArray[i].m_bIsVisited = true;
					//����ǰ���������¼��һ��������
					curVec.push_back(i);
				}
			}

		}
	}
	if (curVec.size() == 0)
	{
		return;
	}
	else
	{
		breadthFirstTraverseImpl(curVec);
	}
}
//prim������
void CMap::primTree(int nodeIndex)
{
	int value = 0;
	int edgeCount = 0;
	vector<int> nodeVec;
	vector<Edge> edgeVec;

	cout << m_pNodeArray[nodeIndex].m_cData<<endl;

	nodeVec.push_back(nodeIndex);
	m_pNodeArray[nodeIndex].m_bIsVisited = true;

	while (edgeCount<m_iCapacity-1)
	{
		int temp = nodeVec.back();
		for (int i=0;i<m_iCapacity;i++)
		{
			getValueFromMatrix(temp, i, value);
			if (value != 0)
			{
				if (m_pNodeArray[i].m_bIsVisited)
				{
					continue;
				}
				else
				{
					Edge edge(temp, i, value);
					edgeVec.push_back(edge);
				}
			}
		}
		//�ӿ�ѡ�߼������ҳ���С�ı�
		int edgeIndex=getMinEdge(edgeVec);
		edgeVec[edgeIndex].m_bSelected = true;

		cout << edgeVec[edgeIndex].m_iNodeIndexA << "---" << edgeVec[edgeIndex].m_iNodeIndexB << " ";
		cout << edgeVec[edgeIndex].m_iWeightValue << endl;

		m_pEdge[edgeCount] = edgeVec[edgeIndex];
		edgeCount++;

		int nextNodeIndex = edgeVec[edgeIndex].m_iNodeIndexB;

		nodeVec.push_back(nextNodeIndex);
		m_pNodeArray[nextNodeIndex].m_bIsVisited = true;
		cout << m_pNodeArray[nextNodeIndex].m_cData << endl;
	}
}

int CMap::getMinEdge(vector<Edge> edgeVec)
{
	int minWeight = 0;
	int minWeightIndex = 0;
	int i = 0;
	//���ҵ���һ��ûѡ���ı�
	for (i;i<(int)edgeVec.size();i++)
	{
		if (!edgeVec[i].m_bSelected)
		{
			minWeightIndex = i;
			minWeight = edgeVec[i].m_iWeightValue;
			break;
		}
			
	}
	//ȡ��С����ʧ�ܵ�
	if (minWeight==0)
	{
		return -1;
	}

	for (;i<(int)edgeVec.size();i++)
	{
		if (!edgeVec[i].m_bSelected)
		{
			if (edgeVec[i].m_iWeightValue <= edgeVec[minWeightIndex].m_iWeightValue)
			{
				minWeight = edgeVec[i].m_iWeightValue;
				minWeightIndex = i;
			}
		}
	}
	return minWeightIndex;
}

void CMap::kruskalTree()
{
	int value = 0;
	int edgeCount = 0;
	//�����Žڵ����ݵ�����
	vector<vector<int>> nodeSets;//�ڵ�λ�ڶ��������
	//��һ����ȡ�����б�
	vector<Edge> edgeVec;
	for (int i=0;i<m_iCapacity;i++)
	{
		for (int k=i+1;k<m_iCapacity;k++)
		{
			getValueFromMatrix(i, k, value);
			if (value != 0)
			{
				Edge edge(i, k, value);
				edgeVec.push_back(edge);
			}
			
		}
	}
	//�ڶ����������б���ȡ�������С�������ı�

	//1.�ҵ��㷨��������
	while (edgeCount<m_iCapacity-1)
	{
	
	//2.�ӱ߼������ҵ���С��
		int minEdgeIndex=getMinEdge(edgeVec);
		edgeVec[minEdgeIndex].m_bSelected = true;
	//3.�ҳ���С�����ӵĵ�
		int nodeAIndex = edgeVec[minEdgeIndex].m_iNodeIndexA;
		int nodeBIndex = edgeVec[minEdgeIndex].m_iNodeIndexB;

		bool nodeAIsInSet = false;
		bool nodeBIsInSet = false;

		int nodeAInSetLabel = -1;
		int nodeBInSetLabel = -1;
	//4.�ҳ������ڵĵ㼯��
		for (int i=0;i<(int)nodeSets.size();i++)
		{
			nodeAIsInSet=isInSet(nodeSets[i], nodeAIndex);
			if (nodeAIsInSet)
			{
				nodeAInSetLabel = i;
			}
		}

		for (int i = 0; i < (int)nodeSets.size(); i++)
		{
			nodeBIsInSet = isInSet(nodeSets[i], nodeBIndex);
			if (nodeBIsInSet)
			{
				nodeBInSetLabel = i;
			}
		}
	//5.���ݵ����ڼ��ϵĲ�ͬ������ͬ����
		if (nodeAInSetLabel==-1&&nodeBInSetLabel==-1)
		{
			vector<int> vec;
			vec.push_back(nodeAIndex);
			vec.push_back(nodeBIndex);
			nodeSets.push_back(vec);
		}
		else if (nodeAInSetLabel == -1 && nodeBInSetLabel != -1)
		{
			nodeSets[nodeBInSetLabel].push_back(nodeAIndex);
		}
		else if (nodeBInSetLabel == -1 && nodeAInSetLabel != -1)
		{
			nodeSets[nodeAInSetLabel].push_back(nodeBIndex);
		}
		else if (nodeAInSetLabel!=-1&&nodeBInSetLabel!=-1&&nodeAInSetLabel!=nodeBInSetLabel)
		{
			mergeNodeSet(nodeSets[nodeAInSetLabel], nodeSets[nodeBInSetLabel]);//�ϲ������㼯��,�ϲ��Ľ��λ��A�����ڵļ�����
			//��B�㼯��ɾ��
			for (int k=nodeBInSetLabel;k<(int)nodeSets.size()-1;k++)
			{
				nodeSets[k] = nodeSets[k + 1];
			}
		}
		else if (nodeAInSetLabel != -1 && nodeBInSetLabel != -1 && nodeAInSetLabel == nodeBInSetLabel)
		{
			//��ʱ�����㴦��һ�������У�����ټ�һ���ߵĻ������γ�һ����·
			continue;
		}
		m_pEdge[edgeCount] = edgeVec[minEdgeIndex];
		edgeCount++;

		cout << edgeVec[minEdgeIndex].m_iNodeIndexA << "---" << edgeVec[minEdgeIndex].m_iNodeIndexB << "  ";
		cout << edgeVec[minEdgeIndex].m_iWeightValue << endl;
	}
}

bool CMap::isInSet(vector<int> nodeSet, int target)
{
	for (int i=0;i<(int)nodeSet.size();i++)
	{
		if (nodeSet[i]==target)
		{
			return true;
		}
	}
	return false;
}

void CMap::mergeNodeSet(vector<int> &nodeSetA, vector<int> nodeSetB)
{
	for (int i=0;i<(int)nodeSetB.size();i++)
	{
		nodeSetA.push_back(nodeSetB[i]);
	}
}