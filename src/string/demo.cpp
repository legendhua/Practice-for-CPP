#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(void)
{
	string name;
	cout << "please input your name:";
	//cin >> name;
	getline(cin, name);//可以接收空格并输出，而cin不能
	if (name.empty())
	{
		cout << "input is NULL" << endl;
		system("pause");
		return 0;
	}
	if (name=="imooc")
	{
		cout << "you are a administrator" << endl;
	}
	cout << "hello " + name << endl;
	cout << "your name length:" << name.size() << endl;
	cout << "your name first letter is:" << name[0] << endl;
	system("pause");
	return 0;
}