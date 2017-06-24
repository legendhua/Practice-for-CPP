#include <iostream>
#include <stdlib.h>
using namespace std;

inline void fun(int i=30, int j=20, int k=10);//inline只是一种系统的编译方式
void fun(double i, double j);
int main(void)
{
	//函数重载
	fun(1.1, 2.2);
	fun(1, 2);
	//默认值
	/*fun();
	fun(100);
	fun(100, 200);
	fun(100, 200, 300);*/

	system("pause");
	return 0;
}
void fun(int i, int j , int k )//声明添加默认值，实现建议去掉
{
	cout << i << "," << j << "," << k << endl;
}
void fun(double i, double j)
{
	cout << i << ',' << j << endl;
}