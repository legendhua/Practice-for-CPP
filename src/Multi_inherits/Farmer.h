#include <string>
using namespace std;


class Farmer
{
public:
	Farmer(string name);
	~Farmer();
	void sow();
protected:
	string m_strName;
};