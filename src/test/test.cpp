#include <iostream>
#include <stdlib.h>
using namespace std;

/*typedef struct 
{
	int x;
	int y;
}Coord;*/
void fun(int &a, int &b);
int main(void)
{
	//函数参数引用
	int x = 10;
	int y = 20;
	cout << x << "," << y << endl;
	fun(x, y);
	cout << x << "," << y << endl;
	/*//指针应用
	int a = 3;
	int *p = &a;
	int *&q = p;
	*q = 5;
	cout << a << endl;
	//结构体引用
	/*Coord c;
	Coord &c1 = c;
	
	c1.x = 10;
	c1.y = 20;
	cout << c.x << ","<<c.y << endl;
	//普通变量引用
	/*int a = 10;
	int &b = a;

	b = 20;
	cout << a << endl;

	a = 30;
	cout << b << endl;*/
	system("pause");
	return 0;
}
void fun(int &a, int &b)
{
	int c = 0;
	c = a;
	a = b;
	b = c;
}