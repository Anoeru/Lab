#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	cout << "what is your name?\n";
	getline(cin, name);
	cout << "good day, sir " << name << endl;
	system("pause");
	return 0;
}
