#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Expression {
public:
	virtual void prntfunc() = 0;
	virtual double calculate(double a) = 0;
	virtual void derivedfunc() = 0;
	virtual Expression* copy() = 0;
};

class Constant :Expression {
	double value;
public:
	Constant(double a) :value(a) {}
	void prntfunc() {
		cout << value << endl;
	}
	double calculate(double a) {
		return a;
	}
	void derivedfunc() {
		cout << "Constant derived is 0" << endl;
	}
	Expression* copy() {
		Constant a = *this;
		return &a;
	}
};

class Variable :Expression {
	double value;
public:
	Variable(double a) :value(a) {}
	void prntfunc() {
		cout << "x" << endl;
	}
	double calculate(double a) {
		return a;
	}
	void derivedfunc() {
		cout << "Variable derived is 1" << endl;
	}
	Expression* copy() {
		Variable a = *this;
		return &a;
	}
};

class Sum :Expression {
	double value;
public:
	Sum(double a) :value(a) {}
	void prntfunc() {
		cout << "a + b" << endl;
	}
	double calculate(double a) {
		return value + a;
	}
	void derivedfunc() {
		cout << "Sum derived is a' + b' = 2" << endl;
	}
	Expression* copy() {
		Sum a = *this;
		return &a;
	}
};

class Difference :Expression {
	int value;
public:
	Difference(double a) :value(a) {}
	void prntfunc() {
		cout << "a - b" << endl;
	}
	double calculate(double a) {
		return a-value;
	}
	void derivedfunc() {
		cout << "Difference derived is a' - b' = 0" << endl;
	}
	Expression* copy() {
		Difference a = *this;
		return &a;
	}
};

class Multiply :Expression {
	double value;
public:
	Multiply(double a) :value(a) {}
	void prntfunc() {
		cout << "a * b" << endl;
	}
	double calculate(double a) {
		return value * a;
	}
	void derivedfunc() {
		cout << "Multiply derived is a' * b + a * b'" << endl;
	}
	Expression* copy() {
		Multiply a = *this;
		return &a;
	}
};

class Division :Expression {
	double value;
public:
	Division(double a) :value(a) {}
	void prntfunc() {
		cout << "a/b" << endl;
	}
	double calculate(double a) {
		return a / value;
	}
	void derivedfunc() {
		cout << "Division derived is (a' * b - a * b')/(b*b)" << endl;
	}
	Expression* copy() {
		Division a = *this;
		return &a;
	}
};

class Sinus :Expression {
	double value;
public:
	Sinus(double a) :value(a) {}
	void prntfunc() {
		cout << "sin(x)" << endl;
	}
	double calculate(double a) {
		return sin(a);
	}
	void derivedfunc() {
		cout << "Sinus derived is cos(a)" << endl;
	}
	Expression* copy() {
		Sinus a = *this;
		return &a;
	}
};

class Cosinus :Expression {
	double value;
public:
	Cosinus(double a) :value(a) {}
	void prntfunc() {
		cout << "cos(x)" << endl;
	}
	double calculate(double a) {
		return cos(a);
	}
	void derivedfunc() {
		cout << "Cosinus derived is -sin(a)" << endl;
	}
	Expression* copy() {
		Cosinus a = *this;
		return &a;
	}
};

class Exp :Expression {
	double value;
public:
	Exp(double a) :value(a) {}
	void prntfunc() {
		cout << "e^x" << endl;
	}
	double calculate(double a) {
		return exp(a);
	}
	void derivedfunc() {
		cout << "Exp derived is e^a" << endl;
	}
	Expression* copy() {
		Exp a = *this;
		return &a;
	}
};

class Ln :Expression {
	double value;
public:
	Ln(double a) :value(a) {}
	void prntfunc() {
		cout << "Ln(x)" << endl;
	}
	double calculate(double a) {
		return log(a);
	}
	void derivedfunc() {
		cout << "Ln derived is 1/a" << endl;
	}
	Expression* copy() {
		Ln a = *this;
		return &a;
	}
};

int main() {
	double y, x;
	cout << "Constant" << endl << "Enter y: ";
	cin >> y;
	Constant c(y);

	c.prntfunc();
	cout << "f(x) = " << c.calculate(y) << endl;
	c.derivedfunc();

	cout << endl << "Variable" << endl << "Enter x: ";
	cin >> x;
	Variable v(x);
	v.prntfunc();
	cout << "f(" << x << ") = " << v.calculate(x) << endl;
	v.derivedfunc();

	cout << endl << "Sum" << endl << "Enter x and y: ";
	cin >> x >> y;
	Sum s(y);
	s.prntfunc();
	cout << "f(" << x << ") = " << s.calculate(x) << endl;
	s.derivedfunc();

	cout << endl << "Difference" << endl << "Enter x and y: ";
	cin >> x >> y;
	Difference d(y);
	d.prntfunc();
	cout << "f(" << x << ") = " << d.calculate(x) << endl;
	d.derivedfunc();

	cout << endl << "Multiply" << endl << "Enter x and y: ";
	cin >> x >> y;
	Multiply m(y);
	m.prntfunc();
	cout << "f(" << x << ") = " << m.calculate(x) << endl;
	m.derivedfunc();

	cout << endl << "Division" << endl << "Enter x and y: ";
	cin >> x >> y;
	Division di(y);
	di.prntfunc();
	cout << "f(" << x << ") = " << di.calculate(x) << endl;
	di.derivedfunc();

	cout << endl << "Sin" << endl << "Enter x: ";
	cin >> x;
	Sinus si(x);
	si.prntfunc();
	cout << "f(" << x << ") = " << si.calculate(x) << endl;
	si.derivedfunc();

	cout << endl << "Cos" << endl << "Enter x: ";
	cin >> x;
	Cosinus co(x);
	co.prntfunc();
	cout << "f(" << x << ") = " << co.calculate(x) << endl;
	co.derivedfunc();

	cout << endl << "Exp" << endl << "Enter x: ";
	cin >> x;
	Exp e(x);
	e.prntfunc();
	cout << "f(" << x << ") = " << e.calculate(x) << endl;
	e.derivedfunc();

	cout << endl << "Ln" << endl << "Enter x: ";
	cin >> x ;
	Ln lon(x);
	lon.prntfunc();
	cout << "f(" << x << ") = " << lon.calculate(x) << endl;
	lon.derivedfunc();

	return 0;
}
