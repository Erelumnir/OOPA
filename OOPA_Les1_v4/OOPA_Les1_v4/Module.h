#pragma once

#include <string>
#include <vector>
#include "Docent.h"
#include "Student.h"

class Module
{
public:
	Module(std::string n, int ec);

	std::string getName();

	int getEC();

	void list();

	void addDocent(Docent* d);
	void addStudent(Student* s);

	void removeStudent();

	~Module();

private:
	std::string name;
	int ec;
	std::vector<Docent*> docents;
	std::vector<Student*> students;
};

