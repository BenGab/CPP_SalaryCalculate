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

CEmployee* pEmp[3];
int idx = 0;

void ShowInsertMenu()
{
	int command = 0;
	while (command != 4)
	{
		cout << endl;
		cout << "Insert Emplye\n";
		cout << "1. Woker\n";
		cout << "2. Agent\n";
		cout << "3. Manager\n";
		cout << "4. Back\n\n";
		cout << "Selection:";
		cin >> command;

		switch (command)
		{
		case 1:
			pEmp[idx++] = CWorker::CreateWorker();
			break;
		case 2:
			pEmp[idx++] = CAgent::CreateAgent();
			break;
		case 3:
			pEmp[idx++] = CManager::CreateManager();
			break;
		case 4:
			break;
		default:
			break;
		}
	}
}

void PrintAll()
{
	for (int i = 0; i < idx; i++)
	{
		cout << *pEmp[i] << "\n";
	}
}

void ShowMainMenu()
{
	int command = 0;
	while (command != 4)
	{
		cout << endl;
		cout << "Main menu\n";
		cout << "1. Input\n";
		cout << "2. Show\n";
		cout << "3. Find by name\n";
		cout << "4. Exit\n\n";
		cout << "Selection:";
		cin >> command;

		switch (command)
		{
		case 1:
			ShowInsertMenu();
			break;
		case 2:
			PrintAll();
			break;
		case 4:
			break;
		default:
			break;
		}
	}
}



int main()
{
	ShowMainMenu();

	for (int i = 0; i < 3; i++)
	{
		delete pEmp[i];
	}

	return 0;
}