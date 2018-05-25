#include "LinkedListElement.h"
#include <iostream>

LinkedListElement::LinkedListElement()
{
	content_ = NULL;
	next_ = NULL;
	previous_ = NULL;
}

LinkedListElement::LinkedListElement(T content, LinkedListElement * next, LinkedListElement * previous)
{
	next_ = NULL;
	previous_ = NULL;
	content_ = NULL;

	SetContent(content);
	SetPrevious(previous);
	SetNext(next);
}

void LinkedListElement::setContent(T content)
{
	if (content_)
	{
		delete[] content_;
		content_ = NULL;
	}
	content_ = content;
}

void LinkedListElement::setNext(LinkedListElement * next)
{
	next_ = next;
}

void LinkedListElement::setPrevious(LinkedListElement * previous)
{
	 previous_= previous;
}
