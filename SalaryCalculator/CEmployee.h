#pragma once
#include<string.h>
#include<fstream>
using namespace std;
#define MAXNAMES 5
#define MAXNAME 25
class CEmployee
{
	friend ostream& operator<<(ostream& os, CEmployee& emp);
public:
	CEmployee(const char* aName);
	virtual unsigned int Calculate() = 0;
	//virtual void Display() = 0;
	~CEmployee();

private:
	char name[MAXNAME + 1];
};