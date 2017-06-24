#ifndef COORDINATE_H
#define COORDINATE_H
#include <ostream>
using namespace  std;
class Coordinate
{
	friend ostream &operator<<(ostream &out, const Coordinate &coor);
public:
	Coordinate(int x=0,int y=0);//采用默认构造函数的形式（有初始值）
	void printCoordinate();
private:
	int m_iX;
	int m_iY;
};

#endif