#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

/**
* 定义人的类: Person
* 数据成员姓名: m_strName
* 成员函数: eat()
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
* 定义士兵类: Soldier
* 士兵类公有继承人类: public
* 数据成员编号: m_strCode
* 成员函数: attack()
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
	// 创建Soldier对象
	Soldier soldier;
	// 给对象属性赋值
	soldier.m_strName = "Jim";
	soldier.m_strCode = "592";
	// 打印对象属性值
	cout << soldier.m_strName << endl;
	cout << soldier.m_strCode << endl;
	// 调用对象方法
	soldier.eat();
	soldier.attack();

	system("pause");
	return 0;
}