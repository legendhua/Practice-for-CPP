#include "Person.h"
#include <iostream>
using namespace std;
Person::Person()
{
	cout << "Person()" << endl;
}

Person::~Person()
{
	cout << "~Person()"<< endl;
}

void Person::eat()
{
	m_iAge = 10;
	m_strName = "james";
	cout << "eat()" << endl;
}