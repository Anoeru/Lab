#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	string second_name;
	int age;
public:
	Student() {}
	Student(string &a, string &b, int c) : name(a), second_name(b), age(c) {}
	void getinfo()
	{
		cout << "\nStudent " << name << " " << second_name << endl;
		cout << "Aged " << age<<endl;
		cout << "===============\n";
	}
};

class MainStud : public Student
{
private:
	int phone;
	string email;
public:
	MainStud() {}
	MainStud(string a, string c, string d, int e, int p) : Student(a,c,e), phone (p), email(d) {}
	void getcontacts()
	{
		cout << "Contacts:\nemail " << email << "\nphone " << phone << endl<<"===============\n";
	}
};
int main()
{
	string a, b;
	int c;
	cout << "enter name and surname of the student: ";
	cin >> a >> b;
	cout << "age: ";
	cin >> c;
	Student s1(a, b, c);

	cout << "now enter name and surname of main student pls: ";
	cin >> a >> b;
	cout << "now age: ";
	cin >> c;
	int d;
	string e;
	cout << "now phone and email: ";
	cin >> d;
	cin >> e;
	MainStud s2(a, b, e, c, d);

	s1.getinfo();
	s2.getinfo();
	s2.getcontacts();

	system("pause");
	return 0;
}
