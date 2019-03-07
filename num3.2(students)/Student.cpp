#include "pch.h"
#include "Student.h"

Student::Student()
{
	this->budjet = "";
	this->name = "";
	this->second_name = "";
}
Student::Student(const std::string &bud, const std::string &named, const std::string &familie)
{
	this->budjet = bud;
	this->name = named;
	this->second_name = familie;
}
void Student::setBudjet(const std::string &budget)
{
	this->budjet = budget;
}
std::string &Student::getBudjet()
{
	if (!budjet.size()) {
		std::cout << "no scolarship" << std::endl;
	}
	return budjet;
}
void Student::setName(const std::string &named)
{
	this->name = named;
}
std::string &Student::getName()
{
	if (!name.size()) {
		std::cout << "Error. No name found" << std::endl;
	}
	else
	return name;
}
void Student::setSecond(const std::string &familie)
{
	this->second_name = familie;
}
std::string &Student::getSecond()
{
	if (!second_name.size()) {
		std::cout << "Error. No second name found" << std::endl;
	}
	return second_name;
}