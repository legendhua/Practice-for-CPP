#include <iostream>
#include <stdlib.h>
#include "IndexException.h"
using namespace std;

void test()
{
	//throw 0.1;
	throw IndexException();
}

int main(void)
{
	try
	{
		test();
	}
	catch (Exception &e)   //catch (IndexException &e)//��̬���쳣����
	{
		//cout << "exception" << endl;
		//cout << e << endl;//ͨ�����ý��쳣ֵ��ӡ����
		e.printException();
	}
	catch (...)
	{
		cout << "exception" << endl;
	}
	
	system("pause");
	return 0;
}