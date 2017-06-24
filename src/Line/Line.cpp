#include "Line.h"

Line::Line(int x1,int y1,int x2,int y2):m_coorA(x1,y1),m_coorB(x2,y2)
{
	cout << "Line()" << endl;
}
Line::~Line()
{
	cout << "~Line()" << endl;
}
void Line::setA(int x, int y)
{
	m_coorA.setX(x);
	m_coorA.setY(y);
}
void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
}
void Line::printInfo()
{
	cout <<"A:("<<m_coorA.getX()<<","<< m_coorA.getY()<<")" <<endl;
	cout << "B:(" << m_coorB.getX() << "," << m_coorB.getY() << ")" << endl;
}