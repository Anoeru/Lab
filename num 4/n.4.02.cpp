#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int *m = new int[12];
	int a;
	cout << "enter numbers: ";
	for (int i = 0; i < 12; i++)
	{		
		cin >> m[i];
	}
	for (int i=0; i < 6; i++)
	{
		a = m[2*i];
		m[2*i] = m[2*i + 1];
		m[2*i + 1] = a;
	}
	cout << "result is: ";
	for (int i = 0; i < 12; i++)
	{
		cout << m[i]<<" ";
	}

	system("pause");
	return 0;
}