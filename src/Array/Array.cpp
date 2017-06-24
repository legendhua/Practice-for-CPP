#include "Array.h"
#include <stdlib.h>
#include<iostream>
using namespace std;

Array::Array(int len)
{
	this->len = len;
}
Array::~Array()
{
	cout << "~Array"<< endl;
}
void Array::setLen(int len)
{
	this->len = len;
}
//Array& Array::setLen(int len)
//{
//	this->len = len;
//	return *this;
//}
int Array::getLen()
{
	return this->len;
}
Array& Array::printInfo()
{
	cout << "len="<<len<< endl;
	return *this;//此时返回出去的对象时一个临时的对象，将其函数名加上“&”，使其看作是当前arr1的引用
}

//Array* Array::printInfo()
//{
//	cout << "len=" << len << endl;
//	return this;//此时返回出去的对象时一个临时的对象，通过返回指针的形式同引用实现的效果一致
//}