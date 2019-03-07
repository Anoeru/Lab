#include "pch.h"
#include "Student.h"
#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

int main(int argc, char*argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Student stud[15];
	for (int i = 0; i < 15; i++) 
	{
		cout << "\nStudent number: " << i+1 << endl;;
		cout << "\rScolarship: ";
		cout << stud[i].getBudjet();
		cout << "\rSecond name: ";
		cout << stud[i].getSecond();
		cout << "\rName: ";
		cout << stud[i].getName();
	}
	cout << "\n==============" << endl;
	string u;
	for (int i = 0; i < 15; i++)
	{
		cout << "\nenter info about student number " << i + 1 << endl;
		cout << "\nenter his name: ";
		cin >> u;
		stud[i].setName(u);
		cout << "\nenter his second name: ";
		cin >> u;
		stud[i].setSecond(u);
		cout << "\nenter the quality of his scolarship (good/normal/nothing): ";
		cin >> u;
		stud[i].setBudjet(u);
		cout << "thank you\n";
	}
	cout << "\n=====================================-===";
	for (int i = 0; i < 15; i++)
	{
		cout << "\nStudent number: " << i + 1 << endl;;
		cout << "\nScolarship: ";
		cout << stud[i].getBudjet();
		cout << "\nSecond name: ";
		cout << stud[i].getSecond();
		cout << "\nName: ";
		cout << stud[i].getName();
	}
	cout << "\n==============" << endl;
	system("pause");
	return 0;
}