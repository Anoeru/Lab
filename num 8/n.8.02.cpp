#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	ofstream fout("D:\\var2.txt", ios_base::app);
	char c = 0;

	while (c != '\n') {
		cin.get(c);
		fout << c;
	}

	fout.close();

	system("pause");
	return 0;
}