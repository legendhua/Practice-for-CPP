#include <stdlib.h>
#include <iostream>
#include "System.h"
#include "MyStack.h"
using namespace std;

/*
利用栈机制实现进制转换
描述：输入任意的十进制正整数N，分别输出该整数N的二进制、八进制、十六进制的数
短除法
*/

//#define BIN    2
//#define OCT    8
//#define HEX   16

int main(void)
{
	//MyStack<int> *pStack = new MyStack<int>(20);  //不是很大的数，容量为20足够
	int Num;
	char N;
	cout << "请输入十进制数以及需要换的进制（B代表二进制、O代表八进制、H代表十六进制）:" << endl;
	cin >> Num >> N;
	System s(Num, N);
	s.System_conver();

	system("pause");
	return 0;
}