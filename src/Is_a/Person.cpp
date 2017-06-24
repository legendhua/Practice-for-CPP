#include "Person.h"
#include <iostream>
using namespace std;

Person::Person()
{
	m_strName = "person";
}
Person::~Person()
{
	cout << "~Person()"<< endl;
}
void Person::play()
{
	//cout << "play()" << endl;
	cout << m_strName << endl;
}