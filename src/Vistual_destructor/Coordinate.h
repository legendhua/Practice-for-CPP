#ifndef COORDINATE_H
#define COORDINATE_H

//����һ��Coordiante������֤����������
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