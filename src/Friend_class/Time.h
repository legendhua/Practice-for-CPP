#ifndef TIME_H
#define TIME_H


class Match;
class Time
{
	friend Match;
public:
	Time(int hour, int min, int sec);
private:
	void printTime();
	int m_iHour;
	int m_iMin;
	int m_iSec;
};
#endif