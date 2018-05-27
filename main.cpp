#include <iostream>
//#include "Person.h"
#include "Animal.h"
#include "LinkedList.h"

int main(void)
{
	Animal c("viech");
	Animal b("viech2");
	Animal d("viech3");

	c.add(b);
	c.add(d);

	c.displayAll();

	return 1;
}

