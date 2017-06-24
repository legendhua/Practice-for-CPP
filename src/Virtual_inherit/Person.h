#ifndef PERSON_H   //出现重定义，菱形继承中可定用到
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
