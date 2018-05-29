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
