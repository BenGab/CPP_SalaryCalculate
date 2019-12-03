#include "CAgent.h"

CAgent::CAgent(const char * aName, unsigned int aSalary, unsigned int aWorkhours, unsigned int aQuantity, unsigned int aTip) : CWorker(aName, aSalary, aWorkhours)
{
	quantity = aQuantity;
	tip = aTip;
}

unsigned int CAgent::Calculate()
{
	return CWorker::Calculate() + (tip * quantity);
}

CAgent::~CAgent()
{
}
