#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Tiles
{
private:
	string brand;
	int size_h;
	int size_w;
	double price;
public:
	Tiles()
	{
		this->brand = "";
		this->size_h = 0;
		this->size_w = 0;
		this->price=0;
	}
	Tiles(const string br, int h, int w, double price)
	{
		this->brand = br;
		this->size_h = h;
		this->size_w = w;
		this->price = price;
	}
	void getData()
	{
		cout << "\nBrand: " << brand << "\nSize(h): " << size_h << "\nSize(w): " << size_w << "\nPrice: " << price << endl;
	}
	~Tiles()
	{
		this->brand = "";
		this->size_h = 0;
		this->size_w = 0;
		this->price = 0;
		cout << "\ndestroyed\n";
	}
};

int main()
{
	Tiles one("luk",80,90,15.999);
	Tiles two("some", 34, 34, 12.891);
	one.getData();
	two.getData();

	system("pause");
	return 0;
}