#include "pch.h"
#include <iostream>
using namespace std;

class Vector
{
private:
	double xpro;
	double ypro;
	double zpro;
	double mod;
public:
	void setX(const double x)
	{
		this->xpro = x;
	}
	void setY(const double y)
	{
		this->ypro = y;
	}
	void setZ(const double z)
	{
		this->zpro = z;
	}
	double getX()
	{
		return xpro;
	}
	double getY()
	{
		return ypro;
	}
	double getZ()
	{
		return zpro;
	}
	double getMod()
	{
		return sqrt(xpro*xpro + ypro * ypro + zpro * zpro);
	}
	double getSum(const double slug, const double slug2, const double slug3)
	{
		double sum = sqrt((xpro + slug)*(xpro + slug) + (ypro + slug2) * (ypro + slug2) + (zpro + slug3)*(zpro + slug3));
		return sum;
	}
	double getSumx(const double slug)
	{
		double sumx = slug + xpro;
		return sumx;
	}
	double getSumy(const double slug)
	{
		double sumy = slug + ypro;
		return sumy;
	}
	double getSumz(const double slug)
	{
		double sumz = slug + zpro;
		return sumz;
	}
	double getDif(const double slug, const double slug2, const double slug3)
	{
		double sum = sqrt((xpro - slug)*(xpro - slug) + (ypro - slug2) * (ypro - slug2) + (zpro - slug3)*(zpro - slug3));
		return sum;
	}
	double getDifx(const double slug)
	{
		double sumx = xpro - slug;
		return sumx;
	}
	double getDify(const double slug)
	{
		double sumy = ypro - slug;
		return sumy;
	}
	double getDifz(const double slug)
	{
		double sumz = zpro - slug;
		return sumz;
	}
};

int main()
{
	double x, y, z;
	cout << "enter x,y,z : ";
	cin >> x >> y >> z;
	Vector one;
	one.setX(x);
	one.setY(y);
	one.setZ(z);

	cout << "\nvector's module: " << one.getMod();
	cout << "\nsum :\nenter a number for x,y,z : ";
	cin >> x>>y>>z;
	cout <<"\nresult "<< one.getSum(x, y, z)<<endl;
	
	cout << "\ndif :\nenter a number for x,y,z : ";
	cin >> x >> y >> z;
	cout << "result " << one.getDif(x, y, z) << endl;

	system("pause");
	return 0;
}