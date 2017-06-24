#ifndef TIME_H
#define TIME_H

#include "Match.h"
#include <iostream>
using namespace std;

class Time
{
	friend void Match::printTime(Time &t);
public:
	Time(int hour, int min, int sec);
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};
#endif