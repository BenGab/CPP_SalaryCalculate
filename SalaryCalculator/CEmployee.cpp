#include "CEmployee.h"

CEmployee::CEmployee(const char * aName)
{
	strncpy(name, aName, MAXNAME);
}

CEmployee::~CEmployee()
{
}
