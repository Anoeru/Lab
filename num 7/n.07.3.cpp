#include "pch.h"
#include <iostream>
using namespace std;

class Transport 
{
public :
	virtual int getkolichestvokoles()=0;
	virtual int getmaxspeed()=0;
};
class Autobus : public Transport
{
private:
	int kola;
	int speed;
public:
	Autobus(int k, int s) : kola(k), speed(s){}
	int getkolichestvokoles()
	{
		return kola;
	}
	int getmaxspeed()
	{
		return speed;
	}

};
class Automob : public Transport
{
private:
	int kola;
	int speed;
public:
	Automob(int k, int s) : kola(k), speed(s) {}
	int getkolichestvokoles()
	{
		return kola;
	}
	int getmaxspeed()
	{
		return speed;
	}

};
class Bike : public Transport
{
private:
	int kola;
	int speed;
public:
	Bike(int k, int s) : kola(k), speed(s) {}
	int getkolichestvokoles()
	{
		return kola;
	}
	int getmaxspeed()
	{
		return speed;
	}

};

int main()
{
	Autobus a(6, 120);
	Automob b(4, 240);
	Bike  c(2, 15);

	cout << "autobus has " << a.getkolichestvokoles() << " wheels and can get to " << a.getmaxspeed() << " km/h"<<endl;
	cout << "car has " << b.getkolichestvokoles() << " wheels and can get to " << b.getmaxspeed() << " km/h"<<endl;
	cout << "bike has " << c.getkolichestvokoles() << " wheels and can get to " << c.getmaxspeed() << " km/h"<<endl;
}