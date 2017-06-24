#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate
{
	friend Coordinate& operator-(Coordinate &coor);//��Ԫ����������
	friend Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2);
	friend ostream & operator<<(ostream &out, const Coordinate &coor);
public:
	Coordinate(int x, int y);
	Coordinate& operator-();//��Ա����������
	Coordinate& operator++();//ǰ��++���������������
	Coordinate operator++(int);//����++����������ԭֵ
	Coordinate operator+(const Coordinate& coor);
	int operator[](int index);
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};

#endif