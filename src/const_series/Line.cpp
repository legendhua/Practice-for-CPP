#include "Line.h"
#include <iostream>
using namespace std;

Line::Line(int x1, int y1, int x2, int y2)
{
	//m_coorA.setX(x1);
	//m_coorA.setY(y1);
	m_coorB.setX(x2);
	m_coorB.setY(y2);
}
Line::~Line()
{
	cout << "~Line" << endl;
}
void Line::setA(int x, int y)
{
	/*m_coorA.setX(x);
	m_coorA.setY(y);*/
}
void Line::setB(int x, int y)
{
	m_coorB.setX(x);
	m_coorB.setY(y);
}
void Line::printInfo()
{
	cout << "printInfo" << endl;
	cout << "A:" << m_coorA.getX() << " " << m_coorA.getY() << endl;
	cout << "B:" << m_coorB.getX() << " " << m_coorB.getY() << endl;
}
void Line::printInfo() const
{
	cout << "printInfo const" << endl;
	cout << "A:" << m_coorA.getX() << " " << m_coorA.getY() << endl;
	cout << "B:" << m_coorB.getX() << " " << m_coorB.getY() << endl;
}