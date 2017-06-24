#ifndef COORDINATE_H
#define COORDINATE_H
#include <iostream>
using namespace std;

class Coordinate
{
	friend Coordinate& operator-(Coordinate &coor);//友元函数的重载
	friend Coordinate operator+(const Coordinate &coor1, const Coordinate &coor2);
	friend ostream & operator<<(ostream &out, const Coordinate &coor);
public:
	Coordinate(int x, int y);
	Coordinate& operator-();//成员函数的重载
	Coordinate& operator++();//前置++运算符，返回引用
	Coordinate operator++(int);//后置++操作，返回原值
	Coordinate operator+(const Coordinate& coor);
	int operator[](int index);
	int getX();
	int getY();
private:
	int m_iX;
	int m_iY;
};

#endif