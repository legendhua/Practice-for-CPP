#ifndef PERSON_H   //�����ض��壬���μ̳��пɶ��õ�
#define PERSON_H

#include <string>
using namespace std;

class Person
{
public:
	Person(string color="blue");
	virtual ~Person();
	void printColor();
protected:
	string m_strColor;
};

#endif
