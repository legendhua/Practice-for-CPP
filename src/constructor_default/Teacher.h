#include <string>
#include <iostream>
using namespace std;

class Teacher
{
public:
	Teacher(string name="James", int age = 20,int max=40);//����Ĭ��ֵ����ѭĬ��ֵ����
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	int getMax();
private:
	string m_strName;
	int m_iAge;
	const int m_iMax;// const������������£������ó�ʼ���б��ʼ��
};