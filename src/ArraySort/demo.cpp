#include <iostream>
#include <stdlib.h>
#include "sort.h"
#include <vector>
using namespace std;

void printSort(vector<int> &nums)
{
	for (int i=0;i<(int)nums.size();i++)
	{
		cout << nums[i] << endl;
	}
}

int main(void)
{
	vector<int> test;
	test.push_back(1);
	test.push_back(2);
	test.push_back(-4);
	test.push_back(6);
	test.push_back(3);
	test.push_back(4);
	test.push_back(3);
	InsertSort(test);//÷±Ω”≤Â»Î≈≈–Ú
    //ShellSort(test);//œ£∂˚≈≈–Ú
	//BubbleSort(test);
	//OptimizationBubbleSort(test);
	//SelectSort(test);
	//OrientationBubbleBort(test);

	printSort(test);
	system("pause");
	return 0;
}