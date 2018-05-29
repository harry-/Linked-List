#include "Animal.h"
#include <iostream>

void Animal::setName(std::string  name)
{
	name_ = name ;
}

void Animal::display()
{
	std::cout << name_ << '\n';
}

bool Animal::operator==(Animal& theOtherAnimal)
{
	if (std::strcmp(name_.c_str(), theOtherAnimal.getName().c_str()) == 0)
		return 1;
	else
		return 0;
}

bool Animal::compareName(std::string name)
{
	if (name_ == name)
		return true;
	return false;
}
