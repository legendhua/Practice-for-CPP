#include <iostream>
#include <stdlib.h>
#include"Array.h"
using namespace std;

//1、浅拷贝原理
//2、深拷贝原理

int main(void)
{
	Array arr1(5);
	//arr1.setCount(3);
	Array arr2(arr1);
	
	arr1.printAddr();//深拷贝的方式拷贝对象，内存位置不一样
	arr2.printAddr();
	arr1.printArr();//依次打印数据
	arr2.printArr();
	system("pause");
	return 0;
}