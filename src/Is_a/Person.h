#include <string>
using namespace std;

class Person
{
public:
	Person();
	virtual ~Person();//�������������������Զѵ���ʽ��������ʱ���ͷ��ڴ棬ֻ���ͷ�����ģ���ʱҪ�õ��顣����
	void play();
protected:
	string m_strName;
};
