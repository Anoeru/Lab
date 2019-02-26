#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	double a, b, res;
	int wtd;
	cout << "enter your first number: ";
	cin >> a;
	cout << "\n1 for +,\n2 for - \n3 for *\n4 for /: ";
	cin >> wtd;
	cout << "enter the second number: ";
	cin >> b;
	switch (wtd)
	{
	case 1:
		res = a + b;
		break;
	case 2:
		res = a - b;
		break;
	case 3:
		res = a * b;
		break;
	case 4:
		res = a / b;
		break;
	}
	cout << "your result is " << res << endl;
	system("pause");
	return 0;
}
