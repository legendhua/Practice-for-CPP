#include <iostream>
#include <stdlib.h>
#include "Coordinate.h"
using namespace std;


//运算符重载------一元运算符重载
//1、负号运算符重载（成员函数、友元函数）
//2、++运算符重载（前置++，后置++）
//3、+号运算符重载（成员函数、友元函数）
//4、<<输出运算符重载
//5、[]索引运算符重载
int main(void)
{
	Coordinate coor1(1, 3);
	Coordinate coor2(5, 7);
	Coordinate coor3(0, 0);
	coor3 = coor1 + coor2;
	cout << coor3;
	cout << coor3.getX() << " " << coor3.getY() << endl;
	cout << coor3[0]<<endl;
	/*cout << coor1.getX() << " " << coor1.getY()<<endl;
	-coor1;*///尝试-(-coor1)的结果，可以连续操作
	//cout << coor1.getX() << " " << coor1.getY() << endl;
	//++coor1;
	//cout << coor1.getX() << " " << coor1.getY() << endl;
	/*cout << (coor1++).getX() << " ";
	cout<< (coor1++).getY() << endl;*/

	system("pause");
	return 0;
}