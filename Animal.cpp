#include "Animal.h"
#include <iostream>

void Animal::setName(std::string  name)
{
	name_ = name ;
}

void Animal::Display()
{
	std::cout << name_;
}
