#include <iostream>
#include <stdlib.h>
#include <vector>
#include <list>
#include <map>
#include <string>
using namespace std;

/*
ͨ��ʹ�ñ�׼ģ��⣬ѧϰ���÷�
*/

int main(void)
{
	////vector��ϰ
	//vector<int> ivec1;
	//ivec1.push_back(3);
	//ivec1.push_back(4);
	//ivec1.push_back(6);
	////ivec1.pop_back();

	////cout << ivec1.size() << endl;
	///*for (int i=0;i<ivec1.size();i++)
	//{
	//	cout << ivec1[i] << endl;
	//}*/
	//vector<int>::iterator iter = ivec1.begin();//ͨ������������Ԫ��
	////cout << *iter << endl;
	//for (; iter != ivec1.end(); iter++)
	//{
	//	cout << *iter << endl;
	//}
	//cout << "�˴�Ӧ�м��" << endl;
	//cout<<ivec1.front() << endl;
	//cout << ivec1.back() << endl;

	//list��ϰ
	//list<int> list1;
	//list1.push_back(1);
	//list1.push_back(2);
	//list1.push_back(3);

	///*for (int i = 0; i < list1.size(); i++)
	//{
	//	cout << list1[i] << endl;//����ʹ�����ַ�ʽ����
	//}*/
	//list<int>::iterator iter1 = list1.begin();
	//for (;iter1!=list1.end();iter1++)
	//{
	//	cout << *iter1 << endl;
	//}

	//map��ϰ
	map<int, string> m;
	pair<int, string> p1(3, "hello");
	pair<int, string> p2(6, "world");
	m.insert(p1);
	m.insert(p2);
	cout << m[3] << endl;
	cout << m[6] << endl;

	map<int, string>::iterator iter2 = m.begin();
	for (; iter2 != m.end(); iter2++)
	{
		cout << iter2->first << endl;
		cout << iter2->second << endl;
	}
	system("pause");
	return 0;
}