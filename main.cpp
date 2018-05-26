#include <iostream>
#include "Person.h"
#include "Animal.h"
#include "LinkedListElement.h"
#include "LinkedList.h"
#include "main.h"

int main(void)
{
	LinkedListElement<int>* l1 = new LinkedListElement<int>();
	LinkedListElement<int>* l2 = new LinkedListElement<int>();

	l1->setNext(l2);
	l2->setPrevious(l1);
	typedef LinkedListElement<Person> p;
	

	p p1;
	p p2;
	p1.getContent()->setLastName("hallo");
	p2.getContent()->setLastName("servus");

	p1.setNext(&p2);
	p2.setPrevious(&p1);

	typedef LinkedListElement<Animal> a;
	typedef LinkedListElement<Animal>* pa;

	a a1;
	a a2;

	a1.getContent()->setName("Tiger");
	a2.getContent()->setName("Loewe");

	a1.setNext(&a2);
	a2.setPrevious(&a1);
	LinkedListElement<Animal>* a3 = new LinkedListElement<Animal>();
	LinkedListElement<Animal>* a4 = new LinkedListElement<Animal>();

	a3->setNext(a4);
	a4->setPrevious(a3);

	a3->getContent()->setName("Ein Tier");
	a4->getContent()->setName("Noch ein Tier");

	Animal c("viech");
	Animal b("viech2");


	LinkedListElement<Animal>* cc = new LinkedListElement<Animal>();
	LinkedListElement<Animal>* bb = new LinkedListElement<Animal>();

	cc->setContent(&c);
	bb->setContent(&b);

	bb->setNext(cc);
	cc->setPrevious(bb);

	Animal d("viech3");

	pa pd = bb->insert(d);

	pd->deleteElement();
	bb->deleteElement();

	LinkedList<Animal> animals;
	animals.add(d);
	animals.add(c);
	animals.add(b);

	

	return 1;
}

