#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Rect.h"
#include "Shape.h"
using namespace std;

int main(void)
{
	/*Circle c(10.5);
	cout<<c.calcArea()<<endl;
	Rect r(12, 34);
	cout << r.calcArea() << endl;*/
	Shape *shape1 = new Circle(12,13,10.0);
	Shape *shape2 = new Rect(10, 20.0);
	cout << shape1->calcArea() << endl;
	cout << shape2->calcArea() << endl;
	delete shape1;  //只会执行shape的析构函数，此时需要用到虚析构函数
	shape1 = NULL;
	delete shape2;
	shape2 = NULL;

	system("pause");
	return 0;
}