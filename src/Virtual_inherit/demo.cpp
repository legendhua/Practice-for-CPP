#include <iostream>
#include <stdlib.h>
#include "MigrantWorker.h"
using namespace std;

int main(void)
{
	MigrantWorker *p = new MigrantWorker("zgh","100","yellow");
	//δ��virtual����£���ʾ��������Person
	p->Farmer::printColor();
	p->Worker::printColor();//���ʸ���ĳ�Ա
	/*p->carry();
	p->sow();
	p->printColor();*/
	delete p;
	p = NULL;

	system("pause");
	return 0;
}