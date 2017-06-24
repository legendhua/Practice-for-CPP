#include "Mazer.h"
#include <windows.h>

//构造函数，初始化角色已走的步数
Mazer::Mazer()
{
	m_iSteps = 0;
}

//根据传入的方向使游戏角色移动一步
//这里我们细化下游戏角色移动的过程：首先让游戏角色在当前位置消失，然后让游戏角色在下一个位置出现。
void Mazer::moveForward(char direction)
{
	unsigned long numWritten;
	//获取命令行窗口的窗口句柄
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//在指定坐标位置填充指定的字符,这里我们在游戏角色的当前位置填充空格，使游戏角色消失
	FillConsoleOutputCharacter(handle, ' ', 1, m_heroCurrentPosition, &numWritten);
	//根据传入的方向来设置下一个位置的坐标。至于计算坐标具体的过程，建议读者在纸上画个地图进行简单的模拟
	switch (direction)
	{
	case 'U':
		m_heroCurrentPosition.Y -= 1;
		break;
	case 'R':
		m_heroCurrentPosition.X += 1;
		break;
	case 'D':
		m_heroCurrentPosition.Y += 1;
		break;
	case 'L':
		m_heroCurrentPosition.X -= 1;
		break;
	default:
		break;
	}
	//游戏角色的坐标已经更新，现在要做的是在新坐标的位置上填出代表游戏角色的字符
	FillConsoleOutputCharacter(handle, m_cHero, 1, m_heroCurrentPosition, &numWritten);
	//移动完成后更新游戏角色的朝向
	m_cHeroLookAt = direction;
}

//向上走一步
//首先判断游戏角色上方的位置是墙还是路，若是路，则调用moveForward进行移动，若是墙，则直接返回false，表示移动失败
bool Mazer::walkUp()
{
	if (m_pMap->getMap()[m_heroCurrentPosition.Y - 1][m_heroCurrentPosition.X]) {
		return false;
	}
	else {
		moveForward('U');
		return true;
	}
}

bool Mazer::walkDown()
{
	if (m_pMap->getMap()[m_heroCurrentPosition.Y + 1][m_heroCurrentPosition.X]) {
		return false;
	}
	else {
		moveForward('D');
		return true;
	}
}

bool Mazer::walkLeft()
{
	if (m_pMap->getMap()[m_heroCurrentPosition.Y][m_heroCurrentPosition.X - 1]) {
		return false;
	}
	else {
		moveForward('L');
		return true;
	}
}

bool Mazer::walkRight()
{
	if (m_pMap->getMap()[m_heroCurrentPosition.Y][m_heroCurrentPosition.X + 1]) {
		return false;
	}
	else {
		moveForward('R');
		return true;
	}
}

//设置游戏角色的朝向
void Mazer::setDirection(char direction)
{
	m_cHeroLookAt = direction;
}

//设置游戏角色的位置
void Mazer::setPosition(int x, int y)
{
	unsigned long numWritten;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	m_heroCurrentPosition.X = x;
	m_heroCurrentPosition.Y = y;
	FillConsoleOutputCharacter(handle, m_cHero, 1, m_heroCurrentPosition, &numWritten);
}

//设置代表游戏角色的字符
void Mazer::setHero(char hero)
{
	m_cHero = hero;
}

//设置地图
void Mazer::setMap(MazeMap *map)
{
	m_pMap = map;
}

//获取步数
int Mazer::getSteps()
{
	return m_iSteps;
}

//游戏开始函数
void Mazer::start()
{
	while (true)
	{
		switch (m_cHeroLookAt)
		{
		case 'U':
			//游戏角色朝上时，优先向右走，其次向上走，再次向走左，最次向下走（右手原则）
			walkRight() || walkUp() || walkLeft() || walkDown();
			break;
		case 'D':
			//同样是右手原则，由于此时游戏角色朝下，所以此时游戏角色的右是电脑屏幕的左，其他方向依次类推
			walkLeft() || walkDown() || walkRight() || walkUp();
			break;
		case 'R':
			//还是右手原则，由于此时游戏角色朝右，所以此时游戏角色的右是电脑屏幕的下，其他方向依次类推
			walkDown() || walkRight() || walkUp() || walkLeft();
			break;
		case 'L':
			//也是右手原则，由于此时游戏角色朝左，所以此时游戏角色的右是电脑屏幕的上，其他方向依次类推
			walkUp() || walkLeft() || walkDown() || walkRight();
			break;
		default:
			break;
		}
		m_iSteps++;
		//判断游戏角色的当前位置是否是迷宫出口位置，如果到达出口，游戏结束
		if (m_heroCurrentPosition.X == m_pMap->getExitPosition().X && m_heroCurrentPosition.Y == m_pMap->getExitPosition().Y)
		{
			break;
		}
		//为了使游戏角色的移动过程可见，所以每走一步，要歇息一段时间(Sleep函数传入参数的单位是毫秒)
		Sleep(500);
	}
}