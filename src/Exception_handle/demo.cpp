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
	catch (Exception &e)   //catch (IndexException &e)//多态的异常处理
	{
		//cout << "exception" << endl;
		//cout << e << endl;//通过引用将异常值打印出来
		e.printException();
	}
	catch (...)
	{
		cout << "exception" << endl;
	}
	
	system("pause");
	return 0;
}