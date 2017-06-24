#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;


/*
º¯ÊýÄ£°å
*/

template <typename T>
void display(T a)
{
	cout << a<< endl;
}

template <typename T,class C>
void display(T a, C b)
{
	cout << a << " " << b<<endl;
}

template <typename T,int Ksize>
void display(T a)
{
	for (int i = 0; i < Ksize; i++)
	{
		cout << a << endl;
	}
}

int main(void)
{
	display<int>(10);
	display<double>(10.89);
	display<int, string>(10, "zgh");
	display<int, 3>(6);
	system("pause");
	return 0;
}