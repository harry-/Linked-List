#pragma once
#include "LinkedListElement.h"

template<typename T>
class LinkedList
{

private:

	LinkedListElement<T>* first_{ nullptr };
	LinkedListElement<T>* last_{ nullptr };

public:

	LinkedListElement<T>* getFirst() { return first_; }
	LinkedListElement<T>* getLast() { return last_; }

	void setFirst(LinkedListElement<T>* first) { first_ = first; }
	void setLast(LinkedListElement<T>* last) { last_ = last; }

	void add(T content)
	{
		LinkedListElement<T>* newElement = new LinkedListElement<T>(content, nullptr, last_);

		/* adding to an existing list */
		if (first_ != nullptr)
		{
			getLast()->setNext(newElement);
			last_ = newElement;
		} else 
		/* the list was empty, so let's initalize it with this first object */
		{
			first_ = newElement;
			last_ = newElement;
		}
	}
};