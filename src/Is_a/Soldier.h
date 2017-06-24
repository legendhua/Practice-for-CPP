#include "Person.h"

class Soldier:public Person
{
public:
	Soldier();
	virtual ~Soldier();
	void work();
protected:
	int m_iAge;
private:
};

