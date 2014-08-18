#include "list.h"
#include "node.h"
#include <iostream>

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
	else {
		_tail->next(n);
		_tail = n;
	}
	++_size;
}
void List::insert_at_beg(int d){
	Node *n = new Node(d);
	if(NULL == _head) _head = _tail = n;
	else  {
		n->next(_head);
		_head = n;
	}
	++_size;
}
Node * List::remove(){
	throw "unimportant";
}
Node * List::remove_from_beg(){
	if(NULL == _head) throw "Empty list";
	Node *n = head();
	_head = _head->next();
	_size--;
	return n;
}

#ifdef TEST_LIST
int main(int argc, char const *argv[])
{
	List l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);

	using namespace std;
	while(l.size() > 0) {
		cout << l.remove_from_beg()->data() << " ";
	}
	cout << endl;
	return 0;
}
#endif
