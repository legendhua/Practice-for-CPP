#include "Coordinate.h"
#include <iostream>
using namespace std;

Coordinate::Coordinate()
{
	cout << "Coordinate" << endl;
}
Coordinate::~Coordinate()
{
	cout << "~Coordinate" << endl;
}
void Coordinate::setX(int x) 
{
	m_iX = x;
}
void Coordinate::setY(int y) 
{
	m_iY = y;
}
int Coordinate::getX() const //常成员函数
{
	return m_iX;
}
int Coordinate::getY() const
{
	return m_iY;
}