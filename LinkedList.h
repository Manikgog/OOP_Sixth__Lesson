#ifndef _LINKED_LIST_
#define _LINKED_LIST_

#include <iostream>
#include "Node.h"

class LinkedList
{
private:
	Node* _head;
	Node* _tail;
	int _numbersOfElements;
public:
	LinkedList();

	void Push_back(int data);

	void ShowList();

	Node* SearchByIndex(int index);

	void PushByIndex(int data, int index);

};

#endif