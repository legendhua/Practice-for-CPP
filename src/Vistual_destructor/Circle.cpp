#include "Circle.h"
#include<iostream>
using namespace std;

Circle::Circle(int x,int y,double r) :m_dR(r)
{
	m_pCenter = new Coordinate(x, y);
	cout << "Circle()" << endl;
}
Circle::~Circle()
{
	delete m_pCenter;
	m_pCenter = NULL;
	cout << "~Circle()" << endl;
}
double Circle::calcArea()
{
	cout << "Circle->calcArea()" << endl;
	return 3.14*m_dR*m_dR;
}