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

	pEmp[0] = new CAgent("Joe", 10000, 48, 12, 3456);
	pEmp[1] = new CManager("Carl", 20000);
	pEmp[2] = new CWorker("Stefan", 5000, 24);

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