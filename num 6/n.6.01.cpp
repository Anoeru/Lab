#include "pch.h"
#include <iostream>
using namespace std;

class Property {
protected:
	float worth;
public:
	Property(float worth)
	{
		this->worth = worth;
	}
	virtual float tax() = 0;
};
class Appartment: public Property {
public:
	float tax() {
		return worth / 1000;
	}
	Appartment(double b = 0) :Property(b) {
	}
};
class Car :public Property {
public:
	float tax() {
		return worth / 200;
	}
	Car(double b = 0) :Property(b) {
	}
};
class CountryHouse :public Property {
public:
	float tax() {
		return worth / 500;
	}
	CountryHouse(double b = 0) :Property(b) {
	}
};
int main() {
	Property *m[7];
	float worth;
	for (int i = 0; i < 3; i++)
	{
		cout << "Enter worth of the apartment " << i + 1 << " : ";
		cin >> worth;
		m[i] = new Appartment(worth);
	}
	for (int i = 0; i < 2; i++) 
	{
		cout << "Enter worth of the car " << i + 1 << " : ";
		cin >> worth;
		m[i+3] = new Car(worth);
	}
	for (int i = 0; i < 2; i++)
	{
		cout << "Enter worth of the house " << i + 1 << " : ";
		cin >> worth;
		m[i+5] = new CountryHouse(worth);
	}
	cout << "Taxes:" << endl;
	for (int i = 0; i < 7; i++) {
		cout << i + 1 << ". " << m[i]->tax() << endl;
	}

	system("pause");
	return 0;
}