#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	double a, b, z, t;
	cout << "enter a & b: ";
	cin >> a >> b;
	if (a < b)
		z = sqrt(abs(a*a - b * b));
	else
		z = 1 - 2 * cos(a)*sin(b);
	if (z < b)
		t = pow(z + a * a*b, 1 / 3);
	else
		if (z == b)
			t = 1 - log10(z) + cos(a*a*b);
		else
			t = (1 / cos(z*a));
	cout << "result is:\na = " << a << "\nb = " << b << "\nz = " << z << "\nt = " << t << endl;
	system("pause");
	return 0;
}
