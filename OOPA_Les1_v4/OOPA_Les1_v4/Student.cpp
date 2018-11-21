#include "Student.h"

Student::Student(std::string n): name(n)
{
}

std::string Student::getName()
{
	return name;
}

Student::~Student()
{
}
