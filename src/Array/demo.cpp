#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;
//this ָ��
int main(void)
{
	Array arr1(3);
	//cout<<arr1.getLen()<<endl;
	arr1.printInfo().setLen(5);//����&�Ļ����ǲ���ı�arr1��ֵ
	cout << "len=" << arr1.getLen() << endl;
	//arr1.printInfo().setLen(5).printInfo();//��setLenҲ����ɷ���Array������,ʵ���������е����á����еĲ����������arr1
	system("pause");
	return 0;
}