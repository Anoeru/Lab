#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	virtual string wrname() = 0;
	virtual int wrage() = 0;
	virtual void chname(string a) = 0;
	virtual void chage(int a) = 0;
};
class Cat : public Animal
{
protected:
	string name;
	int age;
public:
	Cat(string name, int age):name(name), age(age) {}
	int wrage() 
	{
		return age;
	}
	string wrname()
	{
		return name;
	}
	void chname(string n)
	{
		this->name = n;
	}
	void chage(int a)
	{
		this->age = a;
	}
};
class Dog : public Animal
{
protected:
	string name;
	int age;
public:
	Dog(string name, int age) :name(name), age(age) {}
	int wrage()
	{
		return age;
	}
	string wrname()
	{
		return name;
	}
	void chname(string n)
	{
		this->name = n;
	}
	void chage(int a)
	{
		this->age = a;
	}
};
class Parrot : public Animal
{
protected:
	string name;
	int age;
public:
	Parrot(string name, int age) :name(name), age(age) {}
	int wrage()
	{
		return age;
	}
	string wrname()
	{
		return name;
	}
	void chname(string n)
	{
		this->name = n;
	}
	void chage(int a)
	{
		this->age = a;
	}
};
int main()
{
    Parrot one("Danny", 2);
	cout << "Parrot " << one.wrname() << "\nAge: " << one.wrage() << endl<<endl;
	Cat two("Jack", 5);
	cout << "Cat " << two.wrname() << "\nAge " << two.wrage() << endl << endl;
	Dog three("Yoho", 7);
	cout << "Dog " << three.wrname() << "\nAge " << three.wrage() << endl << endl;

	string s;
	int a;
	cout << "enter new parrot's name: ";
	cin >> s;
	one.chname(s);
	cout << "new parrot's age: ";
	cin >> a;
	one.chage(a);

	cout << "enter new cat's name: ";
	cin >> s;
	two.chname(s);
	cout << "new cat's age: ";
	cin >> a;
	two.chage(a);
	
	cout << "enter new dog's name: ";
	cin >> s;
	three.chname(s);
	cout << "new dog's age: ";
	cin >> a;
	three.chage(a);
	cout << endl;

	cout << "Parrot " << one.wrname() << "\nAge: " << one.wrage() << endl << endl;
	cout << "Cat " << two.wrname() << "\nAge " << two.wrage() << endl << endl;
	cout << "Dog " << three.wrname() << "\nAge " << three.wrage() << endl << endl;

	system("pause");
	return 0;
} 