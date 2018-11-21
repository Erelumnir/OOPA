#pragma once

#include <string>

class Docent
{
public:
	Docent(std::string n);
	std::string getName();
	~Docent();

private:
	std::string name;
};

