#include "Time.h"
#include <iostream>
using namespace std;

Time::Time(int hour,int min,int sec)
{
	m_iHour = hour;
	m_iMin = min;
	m_iSec = sec;
}

void Time::printTime()
{
	cout << m_iHour << "Ê±" << m_iMin << "·Ö" << m_iSec<<"Ãë"<<endl;
}