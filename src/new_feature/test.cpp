#include <iostream>
#include <stdlib.h>
using namespace std;

inline void fun(int i=30, int j=20, int k=10);//inlineֻ��һ��ϵͳ�ı��뷽ʽ
void fun(double i, double j);
int main(void)
{
	//��������
	fun(1.1, 2.2);
	fun(1, 2);
	//Ĭ��ֵ
	/*fun();
	fun(100);
	fun(100, 200);
	fun(100, 200, 300);*/

	system("pause");
	return 0;
}
void fun(int i, int j , int k )//�������Ĭ��ֵ��ʵ�ֽ���ȥ��
{
	cout << i << "," << j << "," << k << endl;
}
void fun(double i, double j)
{
	cout << i << ',' << j << endl;
}