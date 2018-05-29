#pragma once

#include <iostream>
#include <string>
#include <cstdio>
#include <sstream>
#include <cstring>
#include "copy.h"

class Person
{
public:
    Person();
    ~Person();

    Person(const char* first_name, const char* last_name, int year);
    Person(Person& person);
    Person& operator=(Person& person);

	Person(Person&&) = delete; // Verschiebekonstruktor nicht implementiert
	Person& operator=(Person&&) = delete; // Verschiebezuweisung nicht implementiert

    bool setFirstName(const char* first_name);
    bool setLastName(const char* last_name);
    bool setYearOfBirth(const int year);
    bool display();

    char* getFirstName();
    char* getLastName();
    int getYearOfBirth();
    int getCount();

    int raiseCount();


private:
    char* first_name_;
    char* last_name_;
    int year_of_birth_;
    static int count_;
	bool operator==(Person& theOtherPerson)
	{
		if (std::strcmp(.c_str(), theOtherPerson.getFirstName().c_str()) == 0)
			return 1;
		else
			return 0;
	}
};

