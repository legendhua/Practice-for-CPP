#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;
//this 指针
int main(void)
{
	Array arr1(3);
	//cout<<arr1.getLen()<<endl;
	arr1.printInfo().setLen(5);//不加&的话，是不会改变arr1的值
	cout << "len=" << arr1.getLen() << endl;
	//arr1.printInfo().setLen(5).printInfo();//将setLen也改造成返回Array的类型,实现上述两行的作用。所有的操作都是针对arr1
	system("pause");
	return 0;
}