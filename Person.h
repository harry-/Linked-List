#pragma once

class Person
{
public:
	Person();
	Person(char* firstName, char* lastName);
	~Person();

	Person(Person& orig);
	Person& operator=(Person& orig);

	void setFirstName(char* firstName);
	void setLastName(char* lastName);
	
	char* getFirstName() { return this->firstName_; }
	char* getLastName() { return this->lastName_; }

	void Display();

private:

	char* firstName_;
	char* lastName_;
};

