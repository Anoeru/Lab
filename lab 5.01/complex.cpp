#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Complex
{
private:
	double re;
	double im;
public:
	Complex() {}
	Complex(double r, double i) : re(r), im(i) {}
	
	Complex operator= (const Complex& c);
	friend const Complex operator++ (Complex& c,int);
	friend const Complex operator-- (Complex& c, int);
	friend bool operator> (const Complex& left, const Complex& right);
	friend bool operator< (const Complex& left, const Complex& right);
	friend bool operator==(const Complex& left, const Complex& right);
	friend const ostream& operator<< (ostream& out, const Complex& c);
	friend const istream& operator>> (istream& in, Complex& c);
	friend const Complex operator+(const Complex& left, const Complex& right);
	friend const Complex operator-(const Complex& left, const Complex& right);
};

int main()
{
	Complex n1;
	cout << "enter your number (re first, im second) ";
	cin >> n1;

	Complex n2 = n1;
	n2++;
	if (n2 > n1)
	{
		cout << n2;
		cout << endl;
	}

	Complex n3 = n1 + n2;
	cout << "result of this work is : ";
	cout << n3;
	cout << "\n";

	system("pause");
	return 0;
}

Complex Complex::operator= (const Complex& c)
{
	if (this == &c) {
		return *this;
	}
	re = c.re;
	im = c.im;
	return *this;
}
const Complex operator-- (Complex& c, int)
{
	Complex oldValue(c.re, c.im);
	c.im--;
	c.re--;
	return oldValue;
}
const Complex operator++ (Complex& c, int)
{
	Complex oldValue(c.re, c.im);
	c.re++;
	c.im++;
	return oldValue;
}
bool operator> (const Complex& left, const Complex& right)
{
	return (left.re > right.re) && (left.im > right.im);
}
bool operator< (const Complex& left, const Complex& right)
{
	return (left.re < right.re) && (left.im < right.im);
}
bool operator==(const Complex& left, const Complex& right) {
	return ((left.re == right.re)&&(left.im == right.im));
}
const ostream& operator<< (ostream& out, const Complex& c)
{
	out << c.re;
	out <<" + " << c.im<<"i";
	return out;
}
const istream& operator>> (istream& in, Complex& c) {
	in >> c.re >> c.im;
	in.get();
	return in;
}
const Complex operator+(const Complex& left, const Complex& right)
{
	return Complex(left.re + right.re, left.im + right.im);
}
const Complex operator-(const Complex& left, const Complex& right)
{
	return Complex(left.re - right.re, left.im - right.im);
}