#include<iostream>
#include<fstream>
#include "CAgent.h"
#include "CManager.h"
using namespace std;

ostream& operator<<(ostream& os, CEmployee& emp)
{
	os << emp.name << "\t" << emp.Calculate();
	return os;
}

int main()
{
	CEmployee* pEmp[3];

	pEmp[0] = CAgent::CreateAgent();
	pEmp[1] = CManager::CreateManager();
	pEmp[2] = CWorker::CreateWorker();

	for (int i = 0; i < 3; i++)
	{
		cout << *pEmp[i] << "\n";
	}

	for (int i = 0; i < 3; i++)
	{
		delete pEmp[i];
	}

	return 0;
}