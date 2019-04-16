#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student
{
private:
	string name;
	string surname;
	int bilet;
	int kurs;
public:
	Student() : name(""), surname(""), bilet(0),kurs(0){}
	Student(string &name, string &surname, int b,int c): name(name),surname(surname), bilet(b),kurs(c) {}
	void setinfo(string &name, string &surname, int b, int c)
	{
		this->name = name;
		this->surname = surname;
		this->bilet = b;
		this->kurs = c;
	}
	void getinfo()
	{
		cout << "Student " << name << " " << surname << "\nnumber: " << bilet << "\nyear " << kurs << endl<<endl;
	}
	~Student(){}
};
int main()
{
	vector<Student> m;
	Student n1;
	string a, b;
	int c, d;
	for (int i = 0; i < 3; i ++)
	{
		cout << "enter info about student " << i + 1 << endl;
		cout << "\nname and surname: ";
		cin >> a >> b;
		cout << "ticket number and year: ";
		cin >> c >> d;
		cout << endl;
		n1.setinfo(a, b, c, d);
		m.push_back(n1);
	}

	for (int i = 0; i < 3; i++)
	{
		m[i].getinfo();
	}

	system("pause");
	return 0;
}
