#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* ��������: Person
* ���ݳ�Ա: m_strName
* ��Ա����: attack()
*/
class Person
{
public:
	string m_strName;
	void attack()
	{
		cout << "attack" << endl;
	}
};

/**
* ����ʿ����: Soldier
* ʿ���๫�м̳�����
* ���ݳ�Ա: m_strName
* ��Ա����: attack()
*/
class Soldier :public Person
{
public:
	string m_strName;
	void attack()
	{
		cout << "fire!!!" << endl;
	}
};

int main(void)
{
	// ʵ��ʿ������
	Soldier soldier;
	// ��ʿ�����Ը�ֵ"tomato"
	soldier.m_strName = "tomato";
	// ͨ��ʿ���������������Ը�ֵ"Jim"
	soldier.Person::m_strName = "Jim";
	// ��ӡʿ�����������ֵ
	cout << soldier.m_strName << endl;
	// ͨ��ʿ�������ӡ��������ֵ
	cout << soldier.Person::m_strName << endl;
	// ����ʿ�����󷽷�
	soldier.attack();
	// ͨ��ʿ������������෽��
	soldier.Person::attack();

	system("pause");
	return 0;
}