#include "CManager.h"

CManager::CManager(const char * name, unsigned int aWeeksalary) : CEmployee(name)
{
	salary = aWeeksalary;
}

unsigned int CManager::Calculate()
{
	return salary;
}

CManager::~CManager()
{
}
