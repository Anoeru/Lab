#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal
{
private:
	string name;
	int age;
public:
	Animal(string name, int age): name(name), age(age){}
	void getinfo()
	{
		cout << "\nAnimal: " << name << "\naged " << age;
	}
	virtual void voice() = 0;
};
class Dog : public Animal
{
private:
	string type;
public:
	Dog(string name, int age, string type):Animal(name,age), type(type){}
	string &gettype()
	{
		return type;
	}
	void voice()
	{
		cout << "\ndog says bark-bark\n";
	}
};
class Cat : public Animal
{
private:
	string type;
public:
	Cat(string name, int age, string type) :Animal(name, age), type(type) {}
	string &gettype()
	{
		return type;
	}
	void voice()
	{
		cout << "\ncat says nyan-nyan\n";
	}
};
int main()
{
	string a, b;
	int c;
	cout << "enter info about a cat(name,age,breed) : ";
	cin >> a >> c >> b;
	Cat a1(a, c, b);
	cout << "enter info about a dog(name,age,breed) : ";
	cin >> a >> c >> b;
	Dog a2(a, c, b);

	a1.getinfo();
	cout << "\nbreed: " << a1.gettype();
	a1.voice();

	a2.getinfo();
	cout << "\nbreed: " << a2.gettype();
	a2.voice();

	system("pause");
	return 0;
}

