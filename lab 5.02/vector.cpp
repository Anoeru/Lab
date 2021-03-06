#include "pch.h"
#include <iostream>
using namespace std;

class Vector
{
private:
	double xpro;
	double ypro;
	double zpro;
public:
	Vector() {}
	Vector(double x, double y, double z) : xpro(x), ypro(y),zpro(z) {}

	Vector operator= (const Vector& c);
	friend const Vector operator++ (Vector& c, int);
	friend const Vector operator-- (Vector& c, int);
	friend bool operator> (const Vector& left, const Vector& right);
	friend bool operator< (const Vector& left, const Vector& right);
	friend bool operator==(const Vector& left, const Vector& right);
	friend const ostream& operator<< (ostream& out, const Vector& c);
	friend const istream& operator>> (istream& in, Vector& c);
	friend const Vector operator+(const Vector& left, const Vector& right);
	friend const Vector operator-(const Vector& left, const Vector& right);
};
int main()
{
	Vector n1;
	cout << "enter vector (x, y, z) : ";
	cin >> n1;

	Vector n2 = n1;
	n1--;
	if (n2 > n1)
	{
		cout << n1;
		cout << endl;
	}

	Vector n3;
	n3 = n2 + n1;
	cout << "result is : ";
	cout << n3;
	system("pause");
	return 0;
}
Vector Vector::operator= (const Vector& c)
{
	if (this == &c) {
		return *this;
	}
	xpro = c.xpro;
	ypro = c.ypro;
	zpro = c.zpro;
	return *this;
}
const Vector operator-- (Vector& c, int)
{
	Vector oldValue(c.xpro, c.ypro, c.zpro);
	c.xpro--;
	c.ypro--;
	c.zpro--;
	return oldValue;
}
const Vector operator++ (Vector& c, int)
{
	Vector oldValue(c.xpro, c.ypro, c.zpro);
	c.xpro++;
	c.ypro++;
	c.zpro++;
	return oldValue;
}
bool operator> (const Vector& left, const Vector& right)
{
	return (left.xpro > right.xpro) && (left.ypro > right.ypro)&&(left.zpro>right.zpro);
}
bool operator< (const Vector& left, const Vector& right)
{
	return (left.xpro < right.xpro) && (left.ypro < right.ypro)&&(left.zpro<right.zpro);
}
bool operator==(const Vector& left, const Vector& right) {
	return (left.xpro == right.xpro) && (left.ypro == right.ypro)&&(left.zpro==right.zpro);
}
const ostream& operator<< (ostream& out, const Vector& c)
{
	out << c.xpro<<"x ";
	out << c.ypro<<"y ";
	out << c.zpro<<"z ";
	return out;
}
const istream& operator>> (istream& in, Vector& c) {
	in >> c.xpro >> c.ypro>>c.zpro;
	in.get();
	return in;
}
const Vector operator+(const Vector& left, const Vector& right)
{
	return Vector(left.xpro + right.xpro, left.ypro + right.ypro, left.zpro + right.zpro);
}
const Vector operator-(const Vector& left, const Vector& right)
{
	return Vector(left.xpro - right.xpro, left.ypro - right.ypro, left.zpro-right.zpro);
}