#include <iostream>
#include <stdlib.h>
#include "MyStack.h"
#include "Str_match.h"
#include <string>
using namespace std;

int main(void)
{
	string str;
	cout << "��������Ҫƥ����ַ�(Ӣ�ļ�������)��";
	cin >> str;
	Str_match str_mat(str);
	str_mat.match_result();
	system("pause");
	return 0;
}