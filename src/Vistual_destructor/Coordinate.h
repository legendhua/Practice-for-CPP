#ifndef COORDINATE_H
#define COORDINATE_H

//定义一个Coordiante类来验证虚析构函数
class Coordinate
{
public:
	Coordinate(int x,int y);
	virtual ~Coordinate();
protected:
	int m_iX;
	int m_iY;
};
#endif