#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"
class Circle:public Shape
{
public:
	Circle(double r);
	~Circle();
	virtual double calcArea();//虚函数，前面的virtual可以加也可以不加，但是推荐加上
protected:
	double m_dR;
};


#endif