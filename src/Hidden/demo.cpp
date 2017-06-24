#include <iostream>
#include <stdlib.h>
#include "Soldier.h"
using namespace std;

int main(void)
{
	Soldier soldier;
	soldier.play(3);
	soldier.work();
	soldier.Person::play();//访问父类中隐藏的同名成员函数(必须使用这种方式)
	system("pause");
	return 0;
}