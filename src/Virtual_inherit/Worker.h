#include "Person.h"
#include <string>
using namespace std;

class Worker : virtual public Person
{
public:
	Worker(string code = "001",string color="blue");//注意构造函数要将Person类初始化，因为Person没有
	virtual ~Worker();
	void carry();
protected:
	string m_strCode;
};
