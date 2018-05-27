#pragma once
#include <string>
#include "LinkedList.h"

class Animal : public LinkedList
{

private:

	std::string name_{ "not set" };

public:
	Animal() = default;
	Animal(std::string name) : name_{ name } {};

	void setName(std::string name);
	std::string getName() { return name_; }

	void display();
	void displayAll();
};

