#include <iostream>
using namespace std;
class Watch;

/**
* 定义Time类
* 数据成员：m_iHour， m_iMinute，m_iSecond
* 成员函数：构造函数
* 友元类：Watch
*/
class Time
{
	// 友元类
	friend Watch;
public:
	Time(int hour, int min, int sec)
	{
		m_iHour = hour;
		m_iMinute = min;
		m_iSecond = sec;
	}
private:
	int m_iHour;
	int m_iMinute;
	int m_iSecond;
};

/**
* 定义Watch类
* 数据成员：m_tTime
* 成员函数：构造函数
* display用于显示时间
*/
class Watch
{
public:
	Watch(Time &t):m_tTime(t)
	{
	}
	void display()
	{
		cout << m_tTime.m_iHour << endl;
		cout << m_tTime.m_iMinute << endl;
		cout << m_tTime.m_iSecond << endl;
	}
private:
	Time m_tTime;
};

int main()
{
	Time t(6, 30, 20);
	Watch w(t);
	w.display();

	return 0;
}
