#pragma once
#include "CEmployee.h"
class CWorker : public CEmployee
{
public:
	static CEmployee* CreateWorker();
	CWorker(const char* aName, unsigned int aSalary, unsigned int aWorkhours);
	virtual unsigned int Calculate() override;
	~CWorker();

private:
	unsigned int salary;
	unsigned int workhours;
};