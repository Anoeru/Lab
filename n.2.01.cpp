#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main()
{
	double a, b, n, m;
	cout << "enter a & b: ";
	cin >> a >> b;
	if (a < b)
		n = a * a + ((a - b) / sin(a*b));
	else
		n = pow(a - b, 1.0 / 3);
	if (n < b)
		m = (n + a) / (-b) + sqrt(sin(a)*sin(a) - cos(n));
	else
		if (n == b)
			m = b * b + tan(n*a);
		else
			m = pow(b, 3) + n * a*a;
	cout << "result is:\na = " << a << "\nb = " << b << "\nn = " << n << "\nm = " << m << endl;
	system("pause");
	return 0;
}
