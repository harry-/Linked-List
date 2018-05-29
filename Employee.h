#pragma once
#include "Person.h"
class Employee :
	public Person
{
private:
	int employee_nr;
public:
	Employee();
	~Employee();
};

