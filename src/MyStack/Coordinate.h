#ifndef COORDINATE_H
#define COORDINATE_H
#include <ostream>
using namespace  std;
class Coordinate
{
	friend ostream &operator<<(ostream &out, const Coordinate &coor);
public:
	Coordinate(int x=0,int y=0);//����Ĭ�Ϲ��캯������ʽ���г�ʼֵ��
	void printCoordinate();
private:
	int m_iX;
	int m_iY;
};

#endif