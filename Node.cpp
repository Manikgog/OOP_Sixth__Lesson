#include "Node.h"

void Node::SetNext(Node* next)
{
	_next = next;
}

Node* Node::GetNext()
{
	if (_next != nullptr)
		return _next;
	return nullptr;
}

int Node::GetData()
{
	return _data;
}