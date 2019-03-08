#include "pch.h"
#include "Vector.h"

Vector::Vector()
{
	this->xpro = 0;
	this->ypro = 0;
	this->zpro = 0;
	this->mod = 0;
}
Vector::Vector(const double x, const double y, const double z)
{
	this->xpro = x;
	this->ypro = y;
	this->zpro = z;
	this->mod = sqrt(x*x + y * y + z * z);
}
void Vector::setX(const double x)
{
	this->xpro = x;
}
void Vector::setY(const double y)
{
	this->ypro = y;
}
void Vector::setZ(const double z)
{
	this->zpro = z;
}
void Vector::setMod(const double x, const double y, const double z)
{
	this->mod = sqrt(x*x + y * y + z * z);
}
double Vector::getX()
{
	return xpro;
}
double Vector::getY()
{
	return ypro;
}
double Vector::getZ()
{
	return zpro;
}
double Vector::getMod()
{
	return mod;
}
double Vector::getSum(const double slug,const double slug2,const double slug3)
{
	double sum = sqrt((xpro + slug)*(xpro + slug) + (ypro + slug2) * (ypro + slug2) + (zpro + slug3)*(zpro + slug3));
	return sum;
}
double Vector::getSumx(const double slug)
{
	double sumx = slug + xpro;
	return sumx;
}
double Vector::getSumy(const double slug)
{
	double sumy = slug + ypro;
	return sumy;
}
double Vector::getSumz(const double slug)
{
	double sumz = slug + zpro;
	return sumz;
}
double Vector::getPro(const double mnoj,const double mnoj2,const double mnoj3)
{
	double pro = sqrt((xpro*mnoj)*(xpro*mnoj)+(ypro*mnoj2)*(ypro*mnoj)+(zpro*mnoj3)*(zpro*mnoj));
	return pro;
}
double Vector::getProx(const double mnoj)
{
	double prox = mnoj *xpro;
	return prox;
}
double Vector::getProy(const double mnoj)
{
	double proy = mnoj * ypro;
	return proy;
}
double Vector::getProz(const double mnoj)
{
	double proz = mnoj * zpro;
	return proz;
}