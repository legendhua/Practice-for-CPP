#include "Teacher.h"



Teacher::Teacher(string name, int age):m_strName(name),m_iAge(age)     //�вι��캯��
{
	cout << "Teacher(string name, int age)" << endl;
}
Teacher::Teacher(const Teacher &tea)
{
	cout << "Teacher(const Teacher &tea)" << endl;
}
Teacher::~Teacher()
{
	cout << "~Teacher()" << endl;  //��������
}
void Teacher::setName(string _name)
{
	m_strName = _name;
}
string Teacher::getName()
{
	return m_strName;
}
void Teacher::setAge(int _age)
{
	m_iAge = _age;
}
int Teacher::getAge()
{
	return m_iAge;
}
