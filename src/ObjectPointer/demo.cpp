#include <iostream>
#include <stdlib.h>
#include "Line.h"
using namespace std;

int main(void)
{
	Line *p = new Line(1, 2, 3, 4);
	p->PrintInfo();
	delete p;
	p = NULL;
	cout << sizeof(p) <<endl;
	cout << sizeof(Line) << endl;
	system("pause");
	return 0;
}