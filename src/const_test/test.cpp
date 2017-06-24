#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	//const 变量
	/*const int x = 3;*/

	//const 指针
	const int x = 3;
	int y = 5;
	const int *p = &x;//int const *p = &x
	cout<<*p<<endl;
	p=&y;
	cout<<*p<<endl;
	//x = 5;
	/*int *const p =&x;
	*p = 10;//优先级的问题
	cout << x<<endl;*/

	//const引用
	/*int const&z = x;
	//z = 10;z不能改变
	x = 10;
	cout << z << endl;*/

	system("pause");
	return 0;
}