#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles
{
public:
	string brand;
	int size_h;
	int size_w;
	double price;
	void getData()
	{
		cout << "\nBrand: " << brand << "\nSize(h): " << size_h << "\nSize(w): " << size_w << "\nPrice: " << price<<endl;
	}

};

int main()
{
	Tiles one;
	cout << "enter brand ";
	cin >> one.brand;
	cout << "enter size (h): ";
	cin >> one.size_h;
	cout << "enter size(w): ";
	cin >> one.size_w;
	cout << "enter price: ";
	cin >> one.price;

	Tiles two;
	cout << "\nenter brand ";
	cin >> two.brand;
	cout << "enter size (h): ";
	cin >> two.size_h;
	cout << "enter size(w): ";
	cin >> two.size_w;
	cout << "enter price: ";
	cin >> two.price;

	one.getData();
	two.getData();

	system("pause");
	return 0;
}
