#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(string color)
{
	m_strColor = color;
	cout << "Person()" << endl;
}
Person::~Person()
{
	cout << "~Person()" << endl;
}
void Person::printColor()
{
	cout << m_strColor << endl;
	cout << "Person--printColor()" << endl;
}