#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	cout << "Person()" << endl;
	m_strName = "person";
}
Person::~Person()
{
	cout << "~Person()" << endl;
}
void Person::play()
{
	cout << m_strName << endl;
}