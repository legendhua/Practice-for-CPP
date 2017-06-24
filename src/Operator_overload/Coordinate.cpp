#include "Coordinate.h"
#include <iostream>
using namespace std;


Coordinate::Coordinate(int x, int y)
{
	m_iX = x;
	m_iY = y;
}
Coordinate& Coordinate::operator-()
{
	this->m_iX = -this->m_iX;//没有this也是正确的
	m_iY = -m_iY;
	return *this;
}
int Coordinate::getX()
{
	return m_iX;
}
int Coordinate::getY()
{
	return m_iY;
}

Coordinate& operator-(Coordinate &coor)
{
	coor.m_iX = -coor.m_iX;//没有this也是正确的
	coor.m_iY =-coor.m_iY;
	return coor;
}
Coordinate& Coordinate::operator++()
{
	m_iX++;
	m_iY++;
	return *this;
}

Coordinate Coordinate::operator++(int)
{
	Coordinate old(*this);
	m_iX++;
	m_iY++;
	return old;
}

Coordinate Coordinate::operator+(const Coordinate & coor)
{
	Coordinate temp(0, 0);
	temp.m_iX = this->m_iX + coor.m_iX;
	temp.m_iY = this->m_iY + coor.m_iY;
	cout << "成员函数" << endl;
	return temp;
}

int Coordinate::operator[](int index)
{
	if (0==index)
	{
		return m_iX;
	}
	if (1==index)
	{
		return m_iY;
	}
	return 0;
}

Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2)
{
	Coordinate temp(0, 0);
	temp.m_iX = coor1.m_iX + coor2.m_iX;
	temp.m_iY = coor1.m_iY + coor2.m_iY;
	cout << "友元函数" << endl;
	return temp;
}

ostream& operator<<(ostream &out, const Coordinate &coor)
{
	out << coor.m_iX << " " << coor.m_iY << endl;
	return out;
}