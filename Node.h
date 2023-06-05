#ifndef _NODE_H_
#define _NODE_H_

class Node
{
private:
	int _data;
	Node* _next;

public:
	Node(int data) : _data(data), _next(nullptr) {}

	void SetNext(Node* next);

	Node* GetNext();

	int GetData();

};

#endif