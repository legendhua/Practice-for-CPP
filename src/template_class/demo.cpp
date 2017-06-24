#include <iostream>
#include <stdlib.h>
#include <string>
#include "MyArray.h"
using namespace std;

int main(void)
{
	MyArray<int, 3, 6> arr;
	arr.display();

	system("pause");
	return 0;
}