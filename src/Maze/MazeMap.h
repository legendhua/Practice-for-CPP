#ifndef MAZEMAP_H
#define MAZEMAP_H

#include <windows.h>
//在二维数组中，1代表墙，0代表路
#define WALL 1
#define ROAD 0

class MazeMap
{
public:
	MazeMap(char wall);
	MazeMap::~MazeMap();
	void setWallChar(char wall);	//设置代表墙的字符
	void setMap(int *map, int row, int col);	//设置指向地图二维数组的指针
	void printMap();	//打印地图
	int** getMap();		//获取地图二维数组的指针
	void setExitPosition(COORD coo);	//设置出口位置
	COORD getExitPosition();	//获取出口位置
private:
	char m_cWall;	//代表墙的字符
	char m_cRoad;	//代表路的字符
	int **m_pMap;	//指向地图二维数组的指针
	int m_iMapRow;	//二维数组的行数
	int m_iMapCol;	//二维数组的列数
	COORD m_ExitPosition;	//迷宫出口的坐标
};

#endif