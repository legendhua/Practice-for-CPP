#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Shape.h"
using namespace std;


/*虚函数表的存在证明
   概念说明：
   1、对象的大小(实例化后数据成员的大小，不包括成员函数)
   2、对象的地址
   3、对象成员的地址
   4、虚函数表指针
*/

int main(void)
{
	Shape shape;
	cout << sizeof(shape) << endl;

	int *p = (int*)&shape;
	//cout << p << endl;
	//cout << (unsigned int)(*p) << endl;

	Circle circle(100);
	cout << sizeof(circle) << endl;

	int *q = (int*)&circle;
	cout << q << endl;
	cout << (unsigned int)(*q) << endl;
	//q++;
	//cout << (unsigned int)(*q) << endl;*/

	system("pause");
	return 0;
}