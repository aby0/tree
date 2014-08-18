#ifndef __list_h__
#define __list_h__

#include "node.h"

class List {
public:
	List();
	Node *head();
	Node *tail();
	unsigned long size();
	void insert(int);
	void insert(Node *);
	void insert_at_beg(int);
	Node * remove();
	Node *remove_from_beg();
	//Node* reverse();
private:	
	Node *_head;
	Node *_tail;
	unsigned long _size;
};

#endif


