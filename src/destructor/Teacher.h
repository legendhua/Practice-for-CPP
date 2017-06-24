#include <string>
#include <iostream>
using namespace std;

class Teacher
{
public:
	Teacher(string name="Jim", int age=20);//设置默认值，遵循默认值规则
	Teacher(const Teacher &tea);
	~Teacher();
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};