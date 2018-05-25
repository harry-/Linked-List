#include "Animal.h"
#include <iostream>

void Animal::setName(std::string  name)
{
	name_ = name ;
}

void Animal::Display()
{
	printf("Name....: %s\n", name_);
}
