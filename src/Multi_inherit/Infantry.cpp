#include "Infantry.h"
#include <iostream>
using namespace std;

Infantry::Infantry()
{
	cout << "Infantry()" << endl;
	m_strName = "infantry";
	m_iAge = 11;
}
Infantry::~Infantry()
{
	cout << "~Infantry()" << endl;
}
void Infantry::attack()
{
	cout << m_strName << endl;
}