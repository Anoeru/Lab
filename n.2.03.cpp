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
	if (a > b)
		z = a + log(b*b);
	else
		z = ((a - b) / (a + b))*((a + b) / (a*a - a * b + b * b));
	if (z < b)
		t = sin(z)*sin(z) + (1 / tan(a - b));
	else
		if (z == b)
			t = (2 * z + sqrt(z*z - a)) / (2 * b - sqrt(a*a - z));
		else
			t = pow(z*sin(a), 1 / 3) + (1 / (sqrt(z*cos(b))));
	cout << "result is:\na = " << a << "\nb = " << b << "\ny = " << z << "\nt = " << t << endl;
	system("pause");
	return 0;
}
