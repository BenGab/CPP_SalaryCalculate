#pragma once
#include "CEmployee.h"
class CManager : public CEmployee
{
public:
	static CEmployee* CreateManager();
	CManager(const char* name, unsigned int aWeeksalary);
	unsigned int Calculate();
	~CManager();

private:
	unsigned int salary;
};
