#ifndef CIRCLE_H
#define CIRCLE_H
#include "Shape.h"

class Circle:public Shape
{
public:
	Circle(int r);
	virtual ~Circle();
	//~Circle();
private:
	int m_iR;
};
#endif