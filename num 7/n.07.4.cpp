#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Screen
{
public:
	virtual string getmark1() = 0;
	virtual double getdio() = 0;
};
class Klava
{
public:
	virtual string getmark2() = 0;
	virtual int getprice() = 0;
};

class Comp : public Screen, public Klava
{
private:
	string mark1;
	double dio;
	int price;
public:
	Comp(string a, double d, int c) :mark1(a),dio(d), price(c) {}
	string getmark1()
	{
		return mark1;
	}
	string getmark2()
	{
		return mark1;
	}
	double getdio()
	{
		return dio;
	}
	int getprice()
	{
		return price;
	}
};

class Tele : public Screen, public Klava
{
private:
	string mark1;
	double dio;
	int price;
public:
	Tele(string a,double d, int c) :mark1(a), dio(d), price(c) {}
	string getmark1()
	{
		return mark1;
	}
	string getmark2()
	{
		return mark1;
	}
	double getdio()
	{
		return dio;
	}
	int getprice()
	{
		return price;
	}
};
class PK : public Screen, public Klava
{
private:
	string mark1;
	string mark2;
	double dio;
	int price;
public:
	PK(string a, string b, double d, int c) :mark1(a), mark2(b), dio(d), price(c) {}
	string getmark1()
	{
		return mark1;
	}
	string getmark2()
	{
		return mark2;
	}
	double getdio()
	{
		return dio;
	}
	int getprice()
	{
		return price;
	}
};

int main()
{
	Comp a("acer", 15.6, 18000);
	Tele b("huawei", 5.6, 5100);
	PK c("acer", "dell", 15.7, 2100);

	cout << "notebook\ncompany: " << a.getmark1() << "\nprice: " << a.getprice() << "\ndio: " << a.getdio()<<endl;
	cout << "\nphone\ncompany: " << b.getmark1() << "\nprice: " << b.getprice() << "\ndio: " << b.getdio() << endl;
	cout << "\ncomputer\nscreen\ncompany: " << c.getmark1() << "\ndio: " << c.getdio() << "\nkeyboard\ncompany: " << c.getmark2() << "\nprice: " << c.getprice() << endl;

	system("pause");
	return 0;
}