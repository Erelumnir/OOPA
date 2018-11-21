#include "Module.h"

#include <iostream>

#include <vector>



Module::Module(std::string n, int ec) : name(n), ec(ec)
{
}

void Module::addDocent(Docent * d)
{
	docents.push_back(d);
}

void Module::addStudent(Student * s)
{
	students.push_back(s);
}

void Module::removeStudent()
{
	std::vector<Student*>::iterator it = students.begin();
	while (it != students.end())
	{
		if ((*it)->getName() == "Randy")
		{
			std::cout << "Failed: " << (*it)->getName() << std::endl;
			delete *it;
			it = students.erase(it);
		}
		else
		{
			it++;
		}
	}
}

std::string Module::getName()
{
	return name;
}

int Module::getEC()
{
	return ec;
}

void Module::list()
{
	// Show Module name
	std::cout << getName() << std::endl;
	// Show Docent name
	std::cout << "- Docent:	" << std::endl;

	std::vector<Docent*>::iterator itD = docents.begin();
	while (itD != docents.end())
	{
		std::cout << (*itD)->getName() << std::endl;
		itD++;
	}

	// Show Students
	std::cout << "- Students:		" << std::endl;
	std::vector<Student*>::iterator itS = students.begin();
	while (itS != students.end())
	{
		std::cout << (*itS)->getName() << std::endl;
		itS++;
	}

	std::cout << "------" << std::endl;
}

Module::~Module()
{
}
