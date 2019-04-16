#include "pch.h"
#include <iostream>
#include <list>
#include <string>
using namespace std;

class Complex
{
private:
	int re;
	int im;
public:
	Complex() : re(0), im(0) {}
	Complex(int b, int c) : re(b), im(c) {}
	void setinfo(int b, int c)
	{
		this->re = b;
		this->im = c;
	}
	void getinfo()
	{
		cout << re << " + " << im << "i" << endl;
	}
	~Complex() {}
};
int main()
{
	list<Complex> m;
	int r, i;
	Complex x1;
	for (int y = 0; y < 3; y++)
	{
		cout << "enter number(re first, im second) " << y + 1<<endl;
		cin >> r >> i;
		x1.setinfo(r, i);
		m.push_back(x1);
	}

	list<Complex>::iterator iter;
	cout << "your numbers: \n";
	for (iter = m.begin(); iter != m.end(); ++iter) {
		(*iter).getinfo();
	}

	system("pause");
	return 0;
}