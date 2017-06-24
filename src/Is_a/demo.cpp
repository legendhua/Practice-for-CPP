
#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
using namespace std;


//公有继承，isA
void test1(Person p)
{
	p.play();
}
void test2(Person &p)
{
	p.play();
}
void test3(Person *p)
{
	p->play();
}
int main(void)
{
	//Soldier soldier;
	//Person p;
	//p.play();
	//p = soldier;
	//Person *p1 = &soldier;
	//p1->play();
	//p.play();
	//Person *p2 = new Soldier;//要用到虚析构函数
	//p2->play();
	//delete[] p2;
	//p2 = NULL;
	Person p;
	Soldier s;
	test1(p);
	test1(s);
	test2(p);
	test2(s);
	test3(&p);
	test3(&s);

	system("pause");
	return 0;
}