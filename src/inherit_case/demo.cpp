#include <iostream>
#include <stdlib.h>
#include "Infantry.h"
using namespace std;

int main(void)
{
	Soldier soldier;
	//soldier.play();//保护继承，基类中的public被继承到派生类的protected中，无法fangwen 
	Infantry infantry;
	infantry.attack();
	soldier.work();
	system("pause");
	return 0;
}