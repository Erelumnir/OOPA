#include <iostream>
#include "Module.h"

int main()
{
	// Object Casting
	Module* kernModule = new Module("Kernmodule", 30);
	Module* keuzeModule = new Module("Keuzemodule", 20);
	Module* seminarModule = new Module("Seminars", 10);

	// Add Docenten to Modules
	kernModule->addDocent(new Docent("Wiebe"));
	keuzeModule->addDocent(new Docent("Edwin"));
	seminarModule->addDocent(new Docent("Emiel"));

	// Add Students to Modules
	kernModule->addStudent(new Student("Randy"));	// 1
	kernModule->addStudent(new Student("Katja"));	// 2
	kernModule->addStudent(new Student("Dirk"));	// 3
	kernModule->addStudent(new Student("Kevin"));	// 4
	kernModule->addStudent(new Student("Wessel"));	// 5
	kernModule->addStudent(new Student("Tobias"));	// 6
	kernModule->addStudent(new Student("Nevyl"));	// 7
	kernModule->addStudent(new Student("Tika"));	// 8
	kernModule->addStudent(new Student("Bram"));	// 9
	kernModule->addStudent(new Student("Luan"));	//10

	keuzeModule->addStudent(new Student("Randy"));
	keuzeModule->addStudent(new Student("Kevin"));
	keuzeModule->addStudent(new Student("Tobias"));
	keuzeModule->addStudent(new Student("Wessel"));
	keuzeModule->addStudent(new Student("Nevyl"));

	seminarModule->addStudent(new Student("Randy"));
	seminarModule->addStudent(new Student("Luan"));
	seminarModule->addStudent(new Student("Bram"));
	seminarModule->addStudent(new Student("Katja"));
	seminarModule->addStudent(new Student("Tika"));
	seminarModule->addStudent(new Student("Dirk"));

	// Print
	kernModule->list();
	keuzeModule->list();
	seminarModule->list();

	std::cout << "" << std::endl;

	// EC stuff
	// Ík snapte dit nog niet helemaal

	//	Delete from list
	kernModule->removeStudent();
	keuzeModule->removeStudent();
	seminarModule->removeStudent();

	std::cout << "" << std::endl;

	// Print (2)
	kernModule->list();
	keuzeModule->list();
	seminarModule->list();

	std::cout << "" << std::endl;

	// Cleanup
	delete kernModule;
	delete keuzeModule;
	delete seminarModule;

	char input;
	std::cin >> input;
	return 0;
}