#include <iostream>
#include "Person.h"
#include "Animal.h"
#include "LinkedListElement.h"
#include "LinkedList.h"


int main(void)
{
	//LinkedListElement<int>* l1 = new LinkedListElement<int>();
	//LinkedListElement<int>* l2 = new LinkedListElement<int>();

	//l1->setNext(l2);
	//l2->setPrevious(l1);

	//



	//typedef LinkedListElement<Animal> a;
	//typedef LinkedListElement<Animal>* pa;

	/*a a1;
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
	a4->getContent()->setName("Noch ein Tier");*/



	//LinkedListElement<Animal>* cc = new LinkedListElement<Animal>();
	//LinkedListElement<Animal>* bb = new LinkedListElement<Animal>();

	//cc->setContent(&c);
	//bb->setContent(&b);

	//bb->setNext(cc);
	//cc->setPrevious(bb);

	Animal c("viech");
	Animal b("viech2");
	Animal d("viech3");

	//pa pd = bb->insert(d);

	//pd->deleteElement();
	//bb->deleteElement();

	LinkedList<Animal> animals;
	animals.add(c);
	animals.add(b);
	animals.add(d);

	animals.remove(b);

//	animals.destroy();
	
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	return 0;
}

