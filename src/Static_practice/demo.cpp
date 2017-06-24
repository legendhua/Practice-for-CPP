#include <iostream>
#include <stdlib.h>
#include "Tank.h"
using namespace std;

int main(void)
{
	/*cout << Tank::getCount() << endl;

	Tank t1('A');
	cout << Tank::getCount() << endl;
	cout << t1.getCount() << endl;*/

	Tank *p = new Tank('B');
	cout << Tank::getCount() << endl;
	Tank *q = new Tank('C');
	cout << q->getCount() << endl;
	delete p;
	delete q;
	cout << Tank::getCount() << endl;

	system("pause");
	return 0;
}