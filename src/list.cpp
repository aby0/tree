#include "list.h"
#include "node.h"

List::List(){
	_head = _tail = NULL;
	_size = 0;
}
Node* List::head(){
	return _head;
}
Node* List::tail(){
	return _tail;
}
unsigned long List::size(){
	return _size;
}
void List::insert(int d){
	Node *n = new Node(d);
	insert(n);
}

void List::insert(Node *n){
	if(NULL == _head) _head = _tail = n;
	_tail->next(n);
	_tail = n;
	++_size;
}
void List::insert_at_beg(int d){
	Node *n = new Node(d);
	if(NULL == _head) _head = _tail = n;
	n->next(_head);
	_head = n;
	++_size;
}
Node * List::remove(){
	throw "unimportant";
}
Node * List::remove_from_beg(){
	Node *n = head();
	_head = _head->next();
	_size--;
	return n;
}
