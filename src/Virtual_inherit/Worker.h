#include "Person.h"
#include <string>
using namespace std;

class Worker : virtual public Person
{
public:
	Worker(string code = "001",string color="blue");//ע�⹹�캯��Ҫ��Person���ʼ������ΪPersonû��
	virtual ~Worker();
	void carry();
protected:
	string m_strCode;
};
