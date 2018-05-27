#pragma once

/**	
*	Derived classes will inherit linked list functionality.
*	Pointers to the first and last list members are stored as static members. There is no separate class for the actual list. All objects can take function calls that will affect the entire list.
*	The main drawback of this concept is that there can only be one list at any given point...
*/

class LinkedList
{

private:

	static LinkedList* first_;
	static LinkedList* last_;
	LinkedList* next_;
	LinkedList* previous_;

public:

	LinkedList* getFirst() { return first_; }
	LinkedList* getLast() { return last_; }

	void setFirst( LinkedList* first) { first_ = first; }
	void setLast(LinkedList* last) { last_ = last; }

	LinkedList* getNext() { return next_; }
	LinkedList* getPrevious() { return previous_; }

	void setNext( LinkedList* next) { next_ = next; }
	void setPrevious(LinkedList* previous) { previous_ = previous; }

	LinkedList() = default;

	LinkedList(LinkedList & original, LinkedList * next, LinkedList * previous)
	{
		next_ = nullptr;
		previous_ = nullptr;

		*this = original;
		setPrevious(previous);
		setNext(next);
	}

	/**
	 *	Append a new element at the end of the list.
	*/
	void add(LinkedList element)
	{
		LinkedList* newElement = new LinkedList(element, nullptr, last_);

		/* adding to an existing list */
		if (LinkedList::first_ != nullptr)
		{
			getLast()->setNext(newElement);
			LinkedList::last_ = newElement;
		} else 
		/* the list was empty, so let's initalize it with this first object */
		{
			LinkedList::first_ = this;
			LinkedList::last_ = newElement;
		}
	}

	virtual void display() {}
};