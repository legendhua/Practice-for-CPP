#include "Soldier.h"
#include <iostream>
using namespace std;


Soldier::Soldier()
{
	m_strName = "soldier";
	m_iAge = 10;
}
Soldier::~Soldier()
{
	cout << "~Soldier()" << endl;
}
void Soldier::work()
{
	cout << m_strName<< endl;
	cout << m_iAge << endl;
}