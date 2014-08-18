#ifndef __queue_h__
#define __queue_h__

#include "list.h"

class Queue{
public:
	Queue();
	void enqueue(Node*);
	Node *dequeue();
	Node *front();
	Node *rear();
	int count();
private:
	List q;
	int _count;
};

#endif