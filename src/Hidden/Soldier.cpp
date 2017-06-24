#include "Soldier.h"
#include<iostream>
using namespace std;

Soldier::Soldier()
{
	m_strName = "ZGH";
}
void Soldier::play(int x)
{
	cout << "Soldier--play()" << endl;
	cout << m_strName << endl;
}
void Soldier::work()
{
	cout << "Soldier--work()" << endl;
	Person::m_strName = "CY";
	cout << Person::m_strName<< endl;
}