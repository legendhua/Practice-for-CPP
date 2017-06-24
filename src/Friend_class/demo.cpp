#include <iostream>
#include <stdlib.h>
#include "Match.h"
#include "Time.h"
using namespace std;

int main(void)
{
	Match m(12, 34, 43);
	m.testTime();
	system("pause");
	return 0;
}