#include "pch.h"
#include "Complex.h"
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ifstream fout("D:\\var1.txt", ios_base::app);
	int n;
	fout >> n;
	double r, im;
	Complex *p = new Complex [n];
	
	for (int i = 0; i < n; i++)
	{
		fout >> r;
		p[i].setre(r);
		fout >> im;
		p[i].setim(im);
	}
	Complex max;
	double d=0;
	for (int i = 0; i < n; i++)
	{
		if (p[i].getmod() > d)
		{
			d = p[i].getmod();
		}
	}
	cout << "Result is: " << d<<"\nNumber ";
	for (int i = 0; i < n; i++)
	{
		if (p[i].getmod() == d)
		{
			p[i].getnum();
		}
	}
	system("pause");
	return 0;
}