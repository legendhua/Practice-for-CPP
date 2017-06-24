#include "Farmer.h"
#include <iostream>
using namespace std;

Farmer::Farmer(string name,string color):Person("Farmer"+color)
{
	cout << "Farmer()" << endl;
	m_strName = name;
}
Farmer::~Farmer()
{
	cout << "~Farmer()" << endl;
}
void Farmer::sow()
{
	cout << m_strName << endl;
}