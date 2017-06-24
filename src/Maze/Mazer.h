#ifndef MAZER_H
#define MAZER_H

#include <windows.h>
#include "MazeMap.h"

class Mazer
{
public:
	Mazer();
	//向上走动一步，若成功，则返回true，若失败（上面是墙），则返回false
	bool walkUp();
	//向下走动一步，若成功，则返回true，若失败（下面是墙），则返回false
	bool walkDown();
	//向左走动一步，若成功，则返回true，若失败（左面是墙），则返回false	
	bool walkLeft();
	//向右走动一步，若成功，则返回true，若失败（右面是墙），则返回false
	bool walkRight();
	//设置游戏角色的位置
	void setPosition(int x, int y);
	//设置代表游戏角色的字符
	void setHero(char hero);
	//设置游戏角色的朝向，这个很重要，因为右手原则里的'右'是游戏角色的'右'，并不是电脑屏幕的'右'
	void setDirection(char direction);
	//根据传入的方向使游戏角色移动一步
	void moveForward(char direction);
	//设置地图对象
	void setMap(MazeMap *map);
	//游戏开始函数
	void start();
	//获取步数
	int getSteps();
private:
	//代表游戏角色的字符
	char m_cHero;
	//游戏角色的朝向
	char m_cHeroLookAt;
	//游戏角色的当前位置
	COORD m_heroCurrentPosition;
	//地图对象
	MazeMap *m_pMap;
	//记录游戏角色走了多少步
	int m_iSteps;
};

#endif