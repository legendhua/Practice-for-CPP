#include <string>
#include <iostream>
using namespace std;

class Teacher
{
public:
	Teacher(string name = "James", int age = 20);//����Ĭ��ֵ����ѭĬ��ֵ����
	Teacher(const Teacher &tea);
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
private:
	string m_strName;
	int m_iAge;
};