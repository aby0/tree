#ifndef __node_h__
#define __node_h__

#include <iostream>

class Node{
public:
	Node();
	Node(int);
	Node(int,Node*, Node*); // Data, Left and Right
	Node(int,Node*); // Data and Parent
	Node(int,Node *, Node *, Node *); // Data, Parent, Left and Right

	int data();
	void data(int);

	Node *left();
	void left(Node*);

	Node *right();
	void right(Node*);

	Node *parent();
	void parent(Node*);

	Node* next();
	void next(Node *);
	
	int height();
	void height(int);
protected:
	int _data;
	Node* _left;
	Node* _right;
	Node* _parent;
	int _height;
	Node* _next;
};

#endif