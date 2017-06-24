#include <iostream>
#include <stdlib.h>
#include "Infantry.h"
using namespace std;

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
	Infantry infantry1;//执行构造函数按Person、Soldier、Infantry
	                   //执行析构函数按Infantry、Soldier、Person
	infantry1.attack();
	infantry1.play();
	infantry1.work();
	test1(infantry1);//直接子类和间接子类都可以和父类组成IsA关系
	test2(infantry1);
	test3(&infantry1);
	/*Soldier soldier;
	soldier.play();
	soldier.work();
	test1(soldier);
	test2(soldier);
	test3(&soldier);*/

	system("pause");
	return 0;
}