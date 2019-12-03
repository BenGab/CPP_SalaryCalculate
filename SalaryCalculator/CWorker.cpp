#include<iostream>
#include "CWorker.h"



CEmployee * CWorker::CreateWorker()
{
	char name[MAXNAME];
	unsigned int salary;
	unsigned int whours;
	cout << "\nWorker Name:";
	cin >> name;
	cout << "\nSalary:";
	cin >> salary;
	cout << "\nWorkhours:";
	cin >> whours;
	return new CWorker(name, salary, whours);
}

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
