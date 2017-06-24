#include "MazeMap.h"
#include "stdlib.h"
#include <windows.h>
#include <iostream>
#include <string>
#include "Mazer.h"
using namespace std;


int main(void)
{
	//定义并初始化存储地图数据的二维数组
	int map[11][11] = {
		{ WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL },
		{ WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, ROAD, ROAD, ROAD },
		{ WALL, ROAD, WALL, WALL, WALL, ROAD, WALL, WALL, WALL, ROAD, WALL },
		{ WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL, ROAD, WALL },
		{ WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, ROAD, WALL, WALL, WALL },
		{ WALL, ROAD, WALL, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, WALL },
		{ WALL, ROAD, WALL, WALL, WALL, WALL, WALL, WALL, WALL, ROAD, WALL },
		{ WALL, ROAD, WALL, ROAD, ROAD, ROAD, ROAD, ROAD, WALL, ROAD, WALL },
		{ WALL, WALL, WALL, ROAD, WALL, WALL, WALL, ROAD, WALL, ROAD, WALL },
		{ ROAD, ROAD, ROAD, ROAD, WALL, ROAD, ROAD, ROAD, ROAD, ROAD, WALL },
		{ WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL, WALL }
	};
	//创建地图对象
	MazeMap *mm = new MazeMap('H');
	COORD exitPosition;
	exitPosition.X = 0;
	exitPosition.Y = 9;
	//设置地图对象中的地图
	mm->setMap(&map[0][0], 11, 11);
	//设置地图的出口
	mm->setExitPosition(exitPosition);
	//打印地图
	mm->printMap();

	string emptySpace(5, '\n');
	cout << emptySpace;

	//创建游戏角儿
	Mazer *mzer = new Mazer();
	//设置代表游戏角色的字符，这里我们用'o'代表游戏角色
	mzer->setHero('o');
	//将游戏角色带到迷宫入口
	mzer->setPosition(10, 1);
	//设置游戏角色的朝向
	mzer->setDirection('D');
	//设置游戏角色要走的地图
	mzer->setMap(mm);
	//开始游戏
	mzer->start();

	cout << "总共走了" << mzer->getSteps() << "步" << endl;

	//由于使用了new的方式创建堆对象，所以用完之后要手动销毁
	delete mzer;
	mzer = NULL;

	delete mm;
	mm = NULL;

	system("pause");
}