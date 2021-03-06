#include "pch.h"
#include <iostream>
#include <cmath>
using namespace std;

class Figure
{
public:
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;
	virtual void showFigureType() = 0;
};
class Fourstoronnik : public Figure
{
public:
	virtual double getSquare() = 0;
	virtual double getPerimeter() = 0;
	virtual void showFigureType() = 0;
};
class Rectangle : public Fourstoronnik
{
private:
	double width;
	double height;
public:
	Rectangle(double w, double h) : width(w), height(h)
	{
	}
	double getSquare() override
	{
		return width * height;
	}
	double getPerimeter() override
	{
		return width * 2 + height * 2;
	}
	void showFigureType()
	{
		std::cout << "It's rectangle!" << endl;
	}
};
class Romb : public Fourstoronnik
{
private:
	double dio1;
	double dio2;
public:
	Romb(double d1, double d2) : dio1(d1), dio2(d2)
	{
	}
	double getSquare() override
	{
		return dio1 * dio2*1.2;
	}
	double getPerimeter() override
	{
		return 2*sqrt(dio1*dio1+dio2*dio2);
	}
	void showFigureType()
	{
		std::cout << "It's rhombus!" << endl;
	}
};

int main()
{
	Rectangle rect(30, 50);
	Romb rom(60, 80);

	rect.showFigureType();
	cout << "Square: " << rect.getSquare() << "\nPerimetr: " << rect.getPerimeter()<<endl<<endl;

	rom.showFigureType();
	cout<< "Square: " << rom.getSquare() << "\nPerimetr: " << rom.getPerimeter();

	return 0;
}