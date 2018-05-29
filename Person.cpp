#include "Person.h"


//
int Person::count_ = 0;

Person::Person()
{
    year_of_birth_ = 5;
    first_name_ = nullptr;
    last_name_ = nullptr;
}


Person::~Person()
{
    if (first_name_)
        delete[] first_name_;
    if (last_name_)
        delete[] last_name_;
}

Person::Person(const char * first_name, const char * last_name, int year)
{
    year_of_birth_ = 5;
    first_name_ = nullptr;
    last_name_ = nullptr;
    setFirstName(first_name);
    setLastName(last_name);
    setYearOfBirth(year);
}

Person::Person(Person & person)
{
    year_of_birth_ = 5;

    first_name_ = nullptr;
    last_name_ = nullptr;
    setFirstName(person.first_name_);
    setLastName(person.last_name_);
    setYearOfBirth(person.year_of_birth_);
}

Person & Person::operator=(Person & person)
{
    if (this == &person)
        return *this;
    year_of_birth_ = 5;

	// hier doch deletes? todo
    first_name_ = nullptr;
    last_name_ = nullptr;

    setFirstName(person.first_name_);
    setLastName(person.last_name_);
    setYearOfBirth(person.year_of_birth_);
    return *this;
}

bool Person::setFirstName(const char * first_name)
{
    if (!first_name)
    {
        std::cerr << "setFirstName called with invalid argument\n";
        return false;
    }

    if (first_name_)
    {
        delete[] first_name_;
        first_name_ = nullptr;
    }

    first_name_ = new char[strlen(first_name) + 1];

    if (!first_name)
    {
        std::cerr << "memory allocation failed\n";
        return false;
    }

    copy2(first_name, first_name_);

    return true;
}

bool Person::setLastName(const char * last_name)
{
    if (!last_name)
    {
        std::cerr << "setFirstName called with invalid argument\n";
        return false;
    }

    if (last_name_)
    {
        delete[] last_name_;
        last_name_ = nullptr;
    }

    last_name_ = new char[strlen(last_name) + 1];

    if (!last_name)
    {
        std::cerr << "memory allocation failed\n";
        return false;
    }

    copy2(last_name, last_name_);

    return true;;
}

bool Person::setYearOfBirth(const int year)
{
    year_of_birth_ = year;
    return true;
}

bool Person::display()
{
    std::cout << first_name_ << ' ' << last_name_ << ", " << year_of_birth_ << '\n';
    return true;
}

char * Person::getFirstName()
{
    return first_name_;
}

char * Person::getLastName()
{
    return last_name_;
}

int Person::getYearOfBirth()
{
    return year_of_birth_;
}

int Person::getCount()
{
    return Person::count_;
}

int Person::raiseCount()
{
    return Person::count_++;
}

