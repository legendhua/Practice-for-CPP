#include <stdlib.h>
#include <iostream>
#include "System.h"
#include "MyStack.h"
using namespace std;

/*
����ջ����ʵ�ֽ���ת��
���������������ʮ����������N���ֱ����������N�Ķ����ơ��˽��ơ�ʮ�����Ƶ���
�̳���
*/

//#define BIN    2
//#define OCT    8
//#define HEX   16

int main(void)
{
	//MyStack<int> *pStack = new MyStack<int>(20);  //���Ǻܴ����������Ϊ20�㹻
	int Num;
	char N;
	cout << "������ʮ�������Լ���Ҫ���Ľ��ƣ�B��������ơ�O����˽��ơ�H����ʮ�����ƣ�:" << endl;
	cin >> Num >> N;
	System s(Num, N);
	s.System_conver();

	system("pause");
	return 0;
}