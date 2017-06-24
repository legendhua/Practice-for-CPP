#include "Teacher.h"
#include <iostream>
using namespace std;

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
void Teacher::setGender(string _gender)
{
	m_strGender = _gender;
}
string Teacher::getGender()
{
	return m_strGender;
}
void Teacher::teach()
{
	cout << "ÏÖÔÚÉÏ¿Î..........." << endl;
}