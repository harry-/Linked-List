#include "Person.h"
#include <iostream>


Person::Person()
{
	firstName_ = NULL;
	lastName_ = NULL;
}

Person::Person(char * firstName, char * lastName)
{
	firstName_ = NULL;
	lastName_ = NULL;
	setFirstName(firstName);
	setLastName(lastName);
}

Person::~Person()
{
	if (firstName_)
		delete[] firstName_;

	if (lastName_)
		delete[] lastName_;
}

Person::Person(Person & orig)
{
	firstName_ = NULL;
	lastName_ = NULL;

	setFirstName(orig.firstName_);
	setLastName(orig.lastName_);
}

Person &Person::operator=(Person & orig)
{
	// TODO: hier Rückgabeanweisung eingeben
	if (this == &orig)
		return *this;

	setFirstName(orig.firstName_);
	setLastName(orig.lastName_);

	return *this;
}

void Person::setFirstName(char * firstName)
{
	if (firstName_)
	{
		delete[] firstName_;
		firstName_ = NULL;
	}

	int nLen;

	if (firstName != NULL && (nLen = strlen(firstName)))
	{
		firstName_ = new char[nLen + 1];

		if (firstName_)
		{
			strcpy(firstName_, firstName);
		}
	}
}

void Person::setLastName(char * lastName)
{
	if (lastName_)
	{
		delete[] lastName_;
		lastName_ = NULL;
	}

	int nLen;

	if (lastName != NULL && (nLen = strlen(lastName)))
	{
		lastName_ = new char[nLen + 1];

		if (lastName_)
		{
			strcpy(lastName_, lastName);
		}
	}
}



void Person::Display()
{
	printf("Vorname.....: %s\n", (firstName_ ? firstName_ : "Noch nicht vorhanden"));
	printf("Nachname....: %s\n", (lastName_ ? lastName_ : "Noch nicht vorhanden"));
}
