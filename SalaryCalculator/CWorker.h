#pragma once
#include "CEmployee.h"
class CWorker : public CEmployee
{
public:
	CWorker(const char* aName, unsigned int aSalary, unsigned int aWorkhours);
	virtual unsigned int Calculate() override;
	~CWorker();

private:
	unsigned int salary;
	unsigned int workhours;
};