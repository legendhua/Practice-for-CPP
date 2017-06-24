#include <string>

class Teacher
{
public:
	void setName(string _name);
	string getName();
	void setAge(int _age);
	int getAge();
	void setGender(string _gender);
	string getGender();
	void teach();
private:
	string m_strName;
	int m_iAge;
	string m_strGender;
};
