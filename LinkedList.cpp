#include "LinkedList.h"
#include "Node.h"


LinkedList::LinkedList() : _head(nullptr), _tail(nullptr), _numbersOfElements(0)
{}

void LinkedList::Push_back(int data)
{
	Node* newNode = new Node(data);
	_numbersOfElements++;
	if (_head == nullptr)
	{
		_head = newNode;
		_tail = newNode;
		return;
	}
	newNode->SetNext(_tail);
	_tail = newNode;
	return;
}

void LinkedList::ShowList()
{
	for (auto it = _tail; it != nullptr; it = it->GetNext())
	{
		std::cout << it->GetData() << ' ';
	}
}

Node* LinkedList::SearchByIndex(int index)
{
	int count = _numbersOfElements - index;
	for (auto it = _tail; it != nullptr; it = it->GetNext())
	{
		if (count == 0)
			return it;
		count--;
	}
}

void LinkedList::PushByIndex(int data, int index)
{
	Node* newNode = new Node(data);
	_numbersOfElements++;
	Node* elementInIndex = SearchByIndex(index);
	Node* element = SearchByIndex(index + 1);
	element->SetNext(newNode);
	newNode->SetNext(elementInIndex);
}