#include "pch.h"
#include "Vector.h"
#include <iostream>
#include <Windows.h>

using namespace std;
int main(int argc, char*argv[])
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Vector vec;
	cout << "\rX = ";
	cout << vec.getX();
	cout << "\r\nY = ";
	cout << vec.getY();
	cout << "\r\nZ = ";
	cout << vec.getZ();
	cout << "\r\nMod = ";
	cout << vec.getMod();
	cout << "\n=============";
	cout << "\nwrite info about your vector: ";
	double shit1;
	double shit2;
	double shit3;
	cout << "\nenter x: ";
	cin >> shit1;
	vec.setX(shit1);
	cout << "\nenter y: ";
	cin >> shit2;
	vec.setY(shit2);
	cout<<"\nenter z: ";
	cin >> shit3;
	vec.setZ(shit3);
	vec.setMod(shit1, shit2, shit3);
	cout << "\n-----------------";
	cout << "\n\rX = ";
	cout << vec.getX();
	cout << "\r\nY = ";
	cout << vec.getY();
	cout << "\r\nZ = ";
	cout << vec.getZ();
	cout << "\r\nMod = ";
	cout << vec.getMod();
	cout << "\n=============";
	cout << "\nif you want to get sum click 1\nto get pro click 2\nto exit click 3\n";
	int shit;
	cin >> shit;
	switch (shit) {
	case 1:
		cout << "\nenter your chislo: ";
		cout << "\nfor x: ";
		cin >> shit1;
		cout << "\nfor y: ";
		cin >> shit2;
		cout << "\nfor z: ";
		cin >> shit3;
		cout << "\nresult: " << vec.getSum(shit1,shit2,shit3);
		cout << "\nfor x: " << vec.getSumx(shit1);
		cout << "\nfor y: " << vec.getSumy(shit2);
		cout << "\nfor z: " << vec.getSumz(shit3);
			break;
	case 2:
		cout << "\nenter your chislo: ";
		cout << "\nfor x: ";
		cin >> shit1;
		cout << "\nfor y: ";
		cin >> shit2;
		cout << "\nfor z: ";
		cin >> shit3;
		cout <<"\nresult: "<< vec.getPro(shit1,shit2,shit3);
		cout <<"\nfor x: "<< vec.getProx(shit1);
		cout <<"\nfor y: "<< vec.getProy(shit2);
		cout <<"\nfor z: "<< vec.getProz(shit3);
			break;
	default:
		return 0;
			break;
	}
	system("pause");
	return 0;
}