#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	int *p = new int(20);//������Ϊ��ʼ��
	if (NULL == p)
	{
		system("pause");
		return 0;
	}
	cout << *p << endl;
	delete p;
	p = NULL;
	system("pause");
	return 0;
}