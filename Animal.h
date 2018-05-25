#pragma once
#include <string>

class Animal
{

private:

	std::string name_{ "not set" };

public:
	Animal() = default;
	Animal(std::string name) : name_{ name } {};

	void setName(std::string name);
	std::string getName() { return name_; }

	void Display();
};

