
#include <string>
using namespace std;

class Worker: public Person
{
public:
	Worker(string code);
	~Worker();
	void carry();
protected:
	string m_strCode;
};
