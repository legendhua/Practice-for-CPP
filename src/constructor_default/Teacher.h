#include <string>
#include <iostream>
using namespace std;

class Teacher
{
public:
	Teacher(string name="James", int age = 20,int max=40);//设置默认值，遵循默认值规则
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	int getMax();
private:
	string m_strName;
	int m_iAge;
	const int m_iMax;// const修饰这种情况下，必须用初始化列表初始化
};