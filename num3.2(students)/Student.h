#pragma once
#include <iostream>
#include <string>

#ifndef STUDENT_H_
#define STUDENT_H_
class Student
{
private:
	std::string budjet;
	std::string name;
	std::string second_name;
public:
	Student();
	Student(const std::string&, const std::string&, const std::string&);
	void setBudjet(const std::string&);
	std::string &getBudjet();
	void setName(const std::string&);
	std::string &getName();
	void setSecond(const std::string&);
	std::string &getSecond();
};
#endif STUDENT_H_