#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string surname;
	string name;
	string midname;
	int age;
public:
	Human() : name(""), surname(""), midname(""), age(0) {}
	Human(string a, string b, string c, int d) : surname(a), name(b), midname(c),age(d) {}
	virtual void print() = 0;
	~Human() {}
};

class Student : public Human
{
private:
	bool on_lesson;
public:
	Student() : Human(), on_lesson(false) {}
	Student(string surname, string name, string midname, int age, bool on_lesson) : Human(surname, name, midname, age), on_lesson(on_lesson) {}
	void print()
	{
			cout << "Name: " << surname << " " << name << " " << midname << endl;
			cout << "Age: " << age << endl;
			cout << "Is on lesson: ";
			if (on_lesson == 1) cout << "yes\n";
			else cout << "no\n";
	}
	~Student() {}
};

class Boss : public Human
{
private:
	int number_of_workers;
public:
	Boss() : Human(), number_of_workers(0) {}
	Boss(string surname, string name, string midname, int age, int num) : Human(surname, name, midname, age), number_of_workers(num) {}
	void print()
	{
		cout << "Name: " << surname << " " << name << " " << midname << endl;
		cout << "Age: " << age << endl;
		cout << "Number of workers: " << number_of_workers << endl;
	}
	~Boss() {}
};

int main()
{
	string surname, name, midname;
	int age, number_of_workers;
	bool on_lesson;

	cout << "enter info about student" << endl;
	cout << "surname: ";
	cin >> surname;
	cout << "name: ";
	cin >> name;
	cout << "midname: ";
	cin >> midname;
	cout << "age: ";
	cin >> age;
	cout << "is on lesson? (1 - yes, 0 - no): ";
	cin >> on_lesson;

	Student s(surname, name, midname, age, on_lesson);

	cout << endl << "enter info about boss" << endl;
	cout << "surname: ";
	cin >> surname;
	cout << "name: ";
	cin >> name;
	cout << "midname: ";
	cin >> midname;
	cout << "age: ";
	cin >> age;
	cout << "number of workers: ";
	cin >> number_of_workers;

	Boss b(surname, name, midname, age, number_of_workers);

	s.print();
	cout << endl;
	b.print();

	system("pause");
	return 0;
}