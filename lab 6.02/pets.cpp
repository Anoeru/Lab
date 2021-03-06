#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Alive
{
private:
	string name;
	int age;
public:
	Alive() {}
	Alive(string a, int b):name(a),age(b){}
	void getinfo()
	{
		cout << "\nPet " << name << "\nage: " << age;
	}
	virtual void paws() = 0;
};
class Bird : public Alive
{
private:
	string color;
public:
	Bird(string name, int age, string color) :Alive(name, age), color(color){}
	void paws()
	{
		cout << "\nbird has wings\n";
	}
	string &getcolor()
	{
		return color;
	}
};
class Fish : public Alive
{
public:
	Fish(string name, int age) :Alive(name, age){}
	void paws()
	{
		cout << "\nfish has flippers\n";
	}
};
class Animal : public Alive
{
private:
	string which;
public:
	Animal(string name,int age, string which) : Alive(name,age), which(which){}
	void paws()
	{
		cout << "\nAnimals have paws\n";
	}
	string &getwhich()
	{
		return which;
	}
};
int main()
{
	string a, b;
	int c;
	cout << "enter info about a bird (name,age,color): ";
	cin >> a >> c >> b;
	Bird a1(a, c, b);
	cout << "enter info about a fish (name,age): ";
	cin >> a >> c;
	Fish a2(a, c);
	cout << "enter info about an animal (name, age, type): ";
	cin >> a>> c>> b;
	Animal a3(a, c, b);

	a1.getinfo();
	a1.paws();
	cout << "color is " << a1.getcolor()<<endl;

	a2.getinfo();
	a2.paws();

	a3.getinfo();
	cout << "\nit is a " << a3.getwhich();
	a3.paws();

	system("pause");
	return 0;
}