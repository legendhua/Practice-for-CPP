#include <iostream>
#include <stdlib.h>
#include"Array.h"
using namespace std;

//1��ǳ����ԭ��
//2�����ԭ��

int main(void)
{
	Array arr1(5);
	//arr1.setCount(3);
	Array arr2(arr1);
	
	arr1.printAddr();//����ķ�ʽ���������ڴ�λ�ò�һ��
	arr2.printAddr();
	arr1.printArr();//���δ�ӡ����
	arr2.printArr();
	system("pause");
	return 0;
}