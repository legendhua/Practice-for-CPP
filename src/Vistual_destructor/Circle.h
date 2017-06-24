#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
#include "Coordinate.h"
class Circle :public Shape
{
public:
	Circle(int x,int y,double r);
	virtual ~Circle();
	virtual double calcArea();//�麯����ǰ���virtual���Լ�Ҳ���Բ��ӣ������Ƽ�����
protected:
	double m_dR;
	Coordinate *m_pCenter;
};


#endif