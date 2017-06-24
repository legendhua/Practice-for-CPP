#include "MazeMap.h"
#include <iostream>
using namespace std;

//有参构造函数，用传入的字符初始化墙，用空格初始化路
MazeMap::MazeMap(char wall) :m_cWall(wall)
{
	m_cRoad = ' ';
	m_pMap = NULL;
}

//析构函数
//由于存储地图数据的二维数组是动态申请的内存空间，所以要在析构函数中进行释放
MazeMap::~MazeMap()
{
	if (m_pMap) {
		for (int i = 0; i < m_iMapRow; i++)
		{
			delete[] m_pMap[i];
			m_pMap[i] = NULL;
		}
		delete[] m_pMap;
		cout << "~MazeMap()" << endl;
	}
}

//设置地图
void MazeMap::setMap(int *map, int row, int col)
{
	m_iMapRow = row;
	m_iMapCol = col;
	//为存储地图数据的二维数组动态分配内存空间
	m_pMap = new int*[m_iMapRow];    //分配m_iMapRow个存储int类型指针的内存空间
	for (int i = 0; i < m_iMapRow; i++)
	{
		//将指针数组中的指针指向长度为m_iMapCol的int数组
		m_pMap[i] = new int[m_iMapCol];
	}

	//利用传入的二维数组初始化地图
	int *p = map;
	for (int i = 0; i < m_iMapRow; i++)
	{
		for (int j = 0; j < m_iMapCol; j++)
		{
			m_pMap[i][j] = *p;
			p++;
		}
	}

}

//设置代表墙的数组
void MazeMap::setWallChar(char wall)
{
	m_cWall = wall;
}

//打印地图
void MazeMap::printMap()
{
	for (int i = 0; i < m_iMapRow; i++)
	{
		for (int j = 0; j < m_iMapCol; j++)
		{
			if (m_pMap[i][j]) {		//数组元素若为1， 则打印代表墙的字符
				cout << m_cWall;
			}
			else {		//数组元素若为0，则打印代表路的字符
				cout << m_cRoad;
			}
		}
		cout << endl;
	}
}

//返回地图二维数组指针
int** MazeMap::getMap()
{
	return m_pMap;
}

//设置出口位置
void MazeMap::setExitPosition(COORD coo)
{
	m_ExitPosition = coo;
}

//获取出口位置
COORD MazeMap::getExitPosition()
{
	return m_ExitPosition;
}