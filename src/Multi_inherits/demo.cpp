#include <iostream>
#include <stdlib.h>
#include "MigrantWorker.h"
using namespace std;

int main(void)
{
	/*MigrantWorker m1;
	m1.carry();
	m1.sow();*/
	MigrantWorker *p = new MigrantWorker("Jack","001");
	p->carry();
	p->sow();
	delete p;
	p = NULL;

	system("pause");
	return 0;
}