#pragma once
#include <iostream>
#include <string>

#ifndef AUTO_H_
#define AUTO_H_

class Auto
{
private:
	std::string mark;
	std::string model;
	int year;
	int price;
	int oil_spend;
	int power;
	int max_speed;
	int time_for100;
public:
	Auto();
	Auto(const std::string&, const std::string&, const int, const int, const int, const int, const int, const int);
	void setMark(const std::string&);
	std::string &getMark();
	void setModel(const std::string&);
	std::string &getModel();
	void setYear(const int);
	int getYear();
	void setPrice(const int);
	int getPrice();
	void setOil(const int);
	int getOil();
	void setPower(const int);
	int getPower();
	void setMax(const int);
	int getMax();
	void setTime(const int);
	int getTime();
};
#endif AUTO_H_