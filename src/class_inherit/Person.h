#include <string>
using namespace std;
class Person
{
public:
	Person();
	~Person();
	void eat();
protected:
	string m_strName;
private:
	int m_iAge;
};
