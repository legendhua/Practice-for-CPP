#include <stdlib.h>
#include <iostream>
#include "MyStack.h"
#include "Coordinate.h"
using namespace std;


/*
   ջ��ʹ�ã�
1��char���͵�����
2����Coordinate������
3��ͨ����ģ���ջʹ�ã���ģ��Ĳ��������������Ͳ�����Ҫ�ŵ�һ��.h�ļ��У�
*/
int main(void)
{
	MyStack<char> *p = new MyStack<char>(4);
	p->push('x');
	p->push('d');
	p->push('u');
	cout<<p->stackLength()<<endl;
	p->stackTraverse(false);
    char out;
	p->pop(out);
	cout << out << endl;
	p->clearStack();

	if (p->stackEmpty())
	{
		cout << "ջΪ��" << endl;
	}
	if (p->stackFull())
	{
		cout << "ջΪ��" << endl;
	}
	p->stackTraverse(true);
	/*MyStack<Coordinate> *p = new MyStack<Coordinate>(4);
	Coordinate c1(1, 1);
	Coordinate c2(2, 2);
	Coordinate c3(3, 3);
	p->push(c1);
	p->push(c2);
	p->push(c3);
	p->push(Coordinate(4, 4));
	cout<<p->stackLength()<<endl;
	Coordinate c4;
	p->pop(c4);
	c4.printCoordinate();
	p->stackTraverse(true);
	p->stackTraverse(false);*/

	system("pause");
	return 0;
}