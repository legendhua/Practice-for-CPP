#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* �����˵���: Person
* ���ݳ�Ա����: m_strName
* ��Ա����: eat()
*/
class Person
{
public:
	string m_strName;
	void eat()
	{
		cout << "eat" << endl;
	}
};

/**
* ����ʿ����: Soldier
* ʿ���๫�м̳�����: public
* ���ݳ�Ա���: m_strCode
* ��Ա����: attack()
*/
class Soldier :public Person
{
public:
	string m_strCode;
	void attack()
	{
		cout << "fire!!!" << endl;
	}
};

int main(void)
{
	// ����Soldier����
	Soldier soldier;
	// ���������Ը�ֵ
	soldier.m_strName = "Jim";
	soldier.m_strCode = "592";
	// ��ӡ��������ֵ
	cout << soldier.m_strName << endl;
	cout << soldier.m_strCode << endl;
	// ���ö��󷽷�
	soldier.eat();
	soldier.attack();

	system("pause");
	return 0;
}