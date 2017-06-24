#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* 定义人类: Person
* 数据成员: m_strName
* 成员函数: attack()
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
* 定义士兵类: Soldier
* 士兵类公有继承人类
* 数据成员: m_strName
* 成员函数: attack()
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
	// 实例士兵对象
	Soldier soldier;
	// 向士兵属性赋值"tomato"
	soldier.m_strName = "tomato";
	// 通过士兵对象向人类属性赋值"Jim"
	soldier.Person::m_strName = "Jim";
	// 打印士兵对象的属性值
	cout << soldier.m_strName << endl;
	// 通过士兵对象打印人类属性值
	cout << soldier.Person::m_strName << endl;
	// 调用士兵对象方法
	soldier.attack();
	// 通过士兵对象调用人类方法
	soldier.Person::attack();

	system("pause");
	return 0;
}