#include "CWorker.h"

CWorker::CWorker(const char * aName, unsigned int aSalary, unsigned int aWorkhours) : CEmployee(aName)
{
	salary = aSalary;
	workhours = aWorkhours;
}

unsigned int CWorker::Calculate()
{
	return salary * workhours;
}

CWorker::~CWorker()
{
}
