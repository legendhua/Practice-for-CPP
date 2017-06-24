#include <iostream>
#include <stdlib.h>
#include <string>
#include "Teacher.h"
using namespace std;

int main(void)
{
	Teacher t1;
	Teacher t2("Merry",12,100);
	cout << t1.getName() << " " << t1.getAge() << " "<<t1.getMax()<<endl;
	cout << t2.getName() << " " << t2.getAge() << " "<<t2.getMax()<<endl;
	system("pause");
	return 0;
}