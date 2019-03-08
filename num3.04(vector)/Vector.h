#pragma once
#include <iostream>
#include <string>

#ifndef VECTOR_H_
#define VECTOR_H_

class Vector
{
private:
	double ypro;
	double xpro;
	double zpro;
	double mod;
public:
	Vector();
	Vector(const double, const double, const double);
	void setX(const double);
	void setY(const double);
	void setZ(const double);
	void setMod(const double, const double, const double);
	double getX();
	double getY();
	double getZ();
	double getMod();
	double getSum(const double,const double,const double);
	double getSumx(const double);
	double getSumy(const double);
	double getSumz(const double);
	double getPro(const double,const double, const double);
	double getProx(const double);
	double getProy(const double);
	double getProz(const double);
};
#endif VECTOR_H_