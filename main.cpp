#include <iostream>
#include "Person.h"
#include "Animal.h"
#include "LinkedListElement.h"
#include "LinkedList.h"


int main(void)
{
	Animal c("viech");
	Animal b("viech2");
	Animal d("viech3");
	Animal e("viech5");

	LinkedList<Animal> animals;	
	animals.add(c);
	animals.add(b);
	animals.add(d);

	//animals.remove(b);
	//animals.remove(c);


	
	Person p1("ich", "selbst", 1999);
	Person p2("noch", "jemand", 3333);

	LinkedList<Person> persons;
	persons.add(p1);
	persons.add(p2);

	animals.add(Animal("viech6"));

	persons.display();
	animals.display();


//	animals.destroy();
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	return 0;
}

