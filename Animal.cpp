#include "Animal.h"
#include <iostream>

void Animal::setName(std::string  name)
{
	name_ = name ;
}

void Animal::display()
{
	std::cout << name_;
}

void Animal::displayAll()
{
	LinkedList* index = LinkedList::getFirst();
	for(;index!=nullptr;index=index->getNext())
	{
		index->display();
	} 
}
