#include <iostream>
#include <stdlib.h>
#include "Infantry.h"
using namespace std;

int main(void)
{
	Soldier soldier;
	//soldier.play();//�����̳У������е�public���̳е��������protected�У��޷�fangwen 
	Infantry infantry;
	infantry.attack();
	soldier.work();
	system("pause");
	return 0;
}