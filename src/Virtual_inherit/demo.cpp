#include <iostream>
#include <stdlib.h>
#include "MigrantWorker.h"
using namespace std;

int main(void)
{
	MigrantWorker *p = new MigrantWorker("zgh","100","yellow");
	//未加virtual情况下，演示存在两个Person
	p->Farmer::printColor();
	p->Worker::printColor();//访问父类的成员
	/*p->carry();
	p->sow();
	p->printColor();*/
	delete p;
	p = NULL;

	system("pause");
	return 0;
}