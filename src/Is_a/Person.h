#include <string>
using namespace std;

class Person
{
public:
	Person();
	virtual ~Person();//虚析构函数，当父类以堆的形式定义子类时，释放内存，只会释放子类的，此时要用到虚。。。
	void play();
protected:
	string m_strName;
};
