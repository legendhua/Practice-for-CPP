#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle:public Shape
{
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();//�麯����ǰ���virtual���Լ�Ҳ���Բ��ӣ������Ƽ�����
protected:
	double m_dR;
};


#endif