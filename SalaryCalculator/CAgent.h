#pragma once
#include "CWorker.h"
class CAgent : public CWorker
{
public:
	CAgent(const char* aName, unsigned int aSalary, unsigned int aWorkhours, unsigned int aQuantity, unsigned int aTip);
	unsigned int Calculate() override;
	~CAgent();

private:
	unsigned int quantity;
	unsigned int tip;
};

