#include <iostream>
#include <stdlib.h>
#include "Circle.h"
#include "Shape.h"
using namespace std;


/*�麯����Ĵ���֤��
   ����˵����
   1������Ĵ�С(ʵ���������ݳ�Ա�Ĵ�С����������Ա����)
   2������ĵ�ַ
   3�������Ա�ĵ�ַ
   4���麯����ָ��
*/

int main(void)
{
	Shape shape;
	cout << sizeof(shape) << endl;

	int *p = (int*)&shape;
	//cout << p << endl;
	//cout << (unsigned int)(*p) << endl;

	Circle circle(100);
	cout << sizeof(circle) << endl;

	int *q = (int*)&circle;
	cout << q << endl;
	cout << (unsigned int)(*q) << endl;
	//q++;
	//cout << (unsigned int)(*q) << endl;*/

	system("pause");
	return 0;
}