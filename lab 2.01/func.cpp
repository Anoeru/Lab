#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int good(int points) { return 100 * points + points; }
int norm(int points) { return 80 * points + points; }
int bad(int points) { return 0; }

int(*pointplus)(int points);
int main()
{
	int points=1;
	int ch;
	string character_name;
	cout << "Hello there! Enter your name: ";
	cin >> character_name;
	cout << "Thank you for playing, " << character_name<<endl;
	cout << "Where do you want to go?\n1 for forest\n2 for castle\n3 for dungeon\n";
	cin >> ch;
	switch (ch) {
	case 1:
		pointplus = good;
		break;
	case 2:
		pointplus = norm;
		break;
	case 3:
		pointplus = bad;
		break;
	}
	if (pointplus(points) > 50) { cout << "\nyou saved your life, " << character_name<<"!\n"; }
	else { cout << "\nyou've died, " << character_name<<"! good luck next time!\n"; }

	system("pause");
	return 0;
}
