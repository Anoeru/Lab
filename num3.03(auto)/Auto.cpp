#include "pch.h"
#include "Auto.h"

Auto::Auto()
{
	this->mark = "";
	this->max_speed = 0;
	this->model = "";
	this->oil_spend = 0;
	this->power = 0;
	this->price = 0;
	this->time_for100 = 0;
	this->year = 18004;
}

Auto::Auto(const std::string &murk, const std::string &models, const int yeer, const int prece, const int oil, const int mosh, const int speed, const int time)
{
	this->mark = murk;
	this->model = models;
	this->year = yeer;
	this->price = prece;
	this->oil_spend = oil;
	this->power = mosh;
	this->max_speed = speed;
	this->time_for100 = time;
}
void Auto::setMark(const std::string &murk)
{
	this->mark = murk;
}
std::string &Auto::getMark()
{
	if (!mark.size()) {
		std::cout << "Error. No mark found" << std::endl;
	}
	return mark;
}
void Auto::setModel(const std::string &models)
{
	this->model = models;
}
std::string &Auto::getModel()
{
	if (!model.size()) {
		std::cout << "Error. No model found" << std::endl;
	}
	return model;
}
void Auto::setYear(const int yeer)
{
	this->year = yeer;
}
int Auto::getYear()
{
	if ((year <= 2019) && (year >= 1800))
		return year;
	else {
		return 0;
	}
}
void Auto::setPrice(const int prece)
{
	this->price = prece;
}
int Auto::getPrice()
{
	return price;
}
void Auto::setOil(const int oil)
{
	this->oil_spend = oil;
}
int Auto::getOil()
{
	return oil_spend;
}
void Auto::setPower(const int mosh)
{
	this->power = mosh;
}
int Auto::getPower()
{
	return power;
}
void Auto::setMax(const int speed)
{
	this->max_speed = speed;
}
int Auto::getMax()
{
	return max_speed;
}
void Auto::setTime(const int time)
{
	this->time_for100 = time;
}
int Auto::getTime()
{
	return time_for100;
}