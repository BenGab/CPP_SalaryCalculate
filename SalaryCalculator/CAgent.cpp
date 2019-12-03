#include<iostream>
#include "CAgent.h"

using namespace std;

CEmployee * CAgent::CreateAgent()
{
	char name[MAXNAME];
	unsigned int salary;
	unsigned int whours;
	unsigned int quantity;
	unsigned int tip;
	cout << "\nAgent Name:";
	cin >> name;
	cout << "\nSalary:";
	cin >> salary;
	cout << "\nWorkhours:";
	cin >> whours;
	cout << "\nQuantity:";
	cin >> quantity;
	cout << "\nTip:";
	cin >> tip;
	return new CAgent(name, salary, whours, quantity, tip);
}

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
