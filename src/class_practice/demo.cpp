#include <iostream>
#include <stdlib.h>
using namespace std;

class Coordinate
{
public:
	int x;
	int y;
	void printX()
	{
		cout << x << endl;
	}
	void printY()
	{
		cout << y << endl;
	}
};


int main(void)
{
	//通过栈的方式访问对象
	Coordinate coor;
	coor.x = 10;
	coor.y = 20;
	coor.printX();
	coor.printY();
	//通过堆的方式访问对象
	Coordinate *p = new Coordinate();
	if (NULL==p)
	{
		cout << "申请内存失败" << endl;
		return 0;
	}
	p->x = 100;
	p->y = 200;
	p->printX();
	p->printY();
	delete p;
	p = NULL;

	system("pause");
	return 0;
}