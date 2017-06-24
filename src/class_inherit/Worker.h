#include <stdlib.h>
#include "Person.h"

class Worker :private Person
{
public:
	Worker();
	~Worker();
	void work();
	int m_iSalary;
};