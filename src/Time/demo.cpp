#include <iostream>
using namespace std;
class Watch;

/**
* ����Time��
* ���ݳ�Ա��m_iHour�� m_iMinute��m_iSecond
* ��Ա���������캯��
* ��Ԫ�ࣺWatch
*/
class Time
{
	// ��Ԫ��
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
* ����Watch��
* ���ݳ�Ա��m_tTime
* ��Ա���������캯��
* display������ʾʱ��
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
