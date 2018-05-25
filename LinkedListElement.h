#pragma once
template<typename T>
class LinkedListElement
{

private:

	T content_;
	LinkedListElement<T>* next_;
	LinkedListElement<T>* previous_;

public:

	T getContent() { return content_; }
	LinkedListElement<T>* getNext() { return next_; }
	LinkedListElement<T>* getPrevious() { return previous_; }

	LinkedListElement()
	{
		next_ = NULL;
		previous_ = NULL;
	}

	LinkedListElement(T content, LinkedListElement<T> * next, LinkedListElement<T> * previous)
	{
		next_ = NULL;
		previous_ = NULL;

		SetContent(content);
		SetPrevious(previous);
		SetNext(next);
	}

	void setContent(T content)
	{
		content_ = content;
	}

	void setNext(LinkedListElement<T> * next)
	{
		next_ = next;
	}

	void setPrevious(LinkedListElement<T> * previous)
	{
		previous_ = previous;
	}

	LinkedListElement<T>* insert(T content)
	{
		LinkedListElement<T>* newListElement = new LinkedListElement<T>();
		newListElement->setContent(content);
		newListElement->setNext(getNext());
		newListElement->setPrevious(this);
		setNext(newListElement);
		newListElement->getNext()->setPrevious(newListElement);
		return newListElement;
	}

	void deleteElement()
	{
		if (getPrevious() && getNext())
		{
			getPrevious()->setNext(getNext());
			getNext()->setPrevious(getPrevious());
		}
		else if (!getPrevious() && getNext())
			getNext()->setPrevious(nullptr);
		else if (getPrevious() && !getNext())
			getPrevious()->setNext(nullptr);
		
		delete this;
	}
};
