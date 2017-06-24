#include "Person.h"


class Soldier:public Person
{
public:
	Soldier();
	~Soldier();
	void work();
protected:
	int m_iAge;
};
