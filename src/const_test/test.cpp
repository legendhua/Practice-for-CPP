#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void)
{
	//const ����
	/*const int x = 3;*/

	//const ָ��
	const int x = 3;
	int y = 5;
	const int *p = &x;//int const *p = &x
	cout<<*p<<endl;
	p=&y;
	cout<<*p<<endl;
	//x = 5;
	/*int *const p =&x;
	*p = 10;//���ȼ�������
	cout << x<<endl;*/

	//const����
	/*int const&z = x;
	//z = 10;z���ܸı�
	x = 10;
	cout << z << endl;*/

	system("pause");
	return 0;
}