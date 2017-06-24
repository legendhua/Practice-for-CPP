#include "Mazer.h"
#include <windows.h>

//���캯������ʼ����ɫ���ߵĲ���
Mazer::Mazer()
{
	m_iSteps = 0;
}

//���ݴ���ķ���ʹ��Ϸ��ɫ�ƶ�һ��
//��������ϸ������Ϸ��ɫ�ƶ��Ĺ��̣���������Ϸ��ɫ�ڵ�ǰλ����ʧ��Ȼ������Ϸ��ɫ����һ��λ�ó��֡�
void Mazer::moveForward(char direction)
{
	unsigned long numWritten;
	//��ȡ�����д��ڵĴ��ھ��
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	//��ָ������λ�����ָ�����ַ�,������������Ϸ��ɫ�ĵ�ǰλ�����ո�ʹ��Ϸ��ɫ��ʧ
	FillConsoleOutputCharacter(handle, ' ', 1, m_heroCurrentPosition, &numWritten);
	//���ݴ���ķ�����������һ��λ�õ����ꡣ���ڼ����������Ĺ��̣����������ֽ�ϻ�����ͼ���м򵥵�ģ��
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
	//��Ϸ��ɫ�������Ѿ����£�����Ҫ���������������λ�������������Ϸ��ɫ���ַ�
	FillConsoleOutputCharacter(handle, m_cHero, 1, m_heroCurrentPosition, &numWritten);
	//�ƶ���ɺ������Ϸ��ɫ�ĳ���
	m_cHeroLookAt = direction;
}

//������һ��
//�����ж���Ϸ��ɫ�Ϸ���λ����ǽ����·������·�������moveForward�����ƶ�������ǽ����ֱ�ӷ���false����ʾ�ƶ�ʧ��
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

//������Ϸ��ɫ�ĳ���
void Mazer::setDirection(char direction)
{
	m_cHeroLookAt = direction;
}

//������Ϸ��ɫ��λ��
void Mazer::setPosition(int x, int y)
{
	unsigned long numWritten;
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	m_heroCurrentPosition.X = x;
	m_heroCurrentPosition.Y = y;
	FillConsoleOutputCharacter(handle, m_cHero, 1, m_heroCurrentPosition, &numWritten);
}

//���ô�����Ϸ��ɫ���ַ�
void Mazer::setHero(char hero)
{
	m_cHero = hero;
}

//���õ�ͼ
void Mazer::setMap(MazeMap *map)
{
	m_pMap = map;
}

//��ȡ����
int Mazer::getSteps()
{
	return m_iSteps;
}

//��Ϸ��ʼ����
void Mazer::start()
{
	while (true)
	{
		switch (m_cHeroLookAt)
		{
		case 'U':
			//��Ϸ��ɫ����ʱ�����������ߣ���������ߣ��ٴ���������������ߣ�����ԭ��
			walkRight() || walkUp() || walkLeft() || walkDown();
			break;
		case 'D':
			//ͬ��������ԭ�����ڴ�ʱ��Ϸ��ɫ���£����Դ�ʱ��Ϸ��ɫ�����ǵ�����Ļ��������������������
			walkLeft() || walkDown() || walkRight() || walkUp();
			break;
		case 'R':
			//��������ԭ�����ڴ�ʱ��Ϸ��ɫ���ң����Դ�ʱ��Ϸ��ɫ�����ǵ�����Ļ���£�����������������
			walkDown() || walkRight() || walkUp() || walkLeft();
			break;
		case 'L':
			//Ҳ������ԭ�����ڴ�ʱ��Ϸ��ɫ�������Դ�ʱ��Ϸ��ɫ�����ǵ�����Ļ���ϣ�����������������
			walkUp() || walkLeft() || walkDown() || walkRight();
			break;
		default:
			break;
		}
		m_iSteps++;
		//�ж���Ϸ��ɫ�ĵ�ǰλ���Ƿ����Թ�����λ�ã����������ڣ���Ϸ����
		if (m_heroCurrentPosition.X == m_pMap->getExitPosition().X && m_heroCurrentPosition.Y == m_pMap->getExitPosition().Y)
		{
			break;
		}
		//Ϊ��ʹ��Ϸ��ɫ���ƶ����̿ɼ�������ÿ��һ����ҪЪϢһ��ʱ��(Sleep������������ĵ�λ�Ǻ���)
		Sleep(500);
	}
}