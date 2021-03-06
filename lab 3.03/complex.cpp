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
	void setre(const double a)
	{
		this->re = a;
	}
	void setim(const double b)
	{
		this->im = b;
	}
	double getmod()
	{
		return sqrt(re*re + im * im);
	}
	double getim()
	{
		return im;
	}
	double getre()
	{
		return re;
	}
	void getnum()
	{
		std::cout << re << " + " << im << "i ";
	}
	double getarg()
	{
		return asin(im / getmod());
	}
};

int main()
{
	double r, i;
	cout << "enter real and imagine parts : ";
	cin >> r >> i;
	Complex num;
	num.setim(i);
	num.setre(r);

	cout << "number: ";
	num.getnum();
	cout << "\nmodule : " << num.getmod() << "\nargument : " << num.getarg()<<endl;

	system("pause");
	return 0;
}