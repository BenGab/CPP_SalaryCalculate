#include<iostream>
#include "CManager.h"

using namespace std;
CEmployee * CManager::CreateManager()
{
	char name[MAXNAME];
	unsigned int salary;
	unsigned int whours;
	cout << "\nManager Name:";
	cin >> name;
	cout << "\nSalary:";
	cin >> salary;
	return new CManager(name, salary);
}

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
