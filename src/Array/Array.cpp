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
	return *this;//��ʱ���س�ȥ�Ķ���ʱһ����ʱ�Ķ��󣬽��亯�������ϡ�&����ʹ�俴���ǵ�ǰarr1������
}

//Array* Array::printInfo()
//{
//	cout << "len=" << len << endl;
//	return this;//��ʱ���س�ȥ�Ķ���ʱһ����ʱ�Ķ���ͨ������ָ�����ʽͬ����ʵ�ֵ�Ч��һ��
//}