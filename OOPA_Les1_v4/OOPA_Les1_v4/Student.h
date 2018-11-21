#pragma once

#include <string>

class Student
{
public:
	Student(std::string n);
	std::string getName();
	~Student();

private:
	std::string name;
};

