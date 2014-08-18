#include "node.h"

Node::Node(){

}

Node::Node(int d){
	Node(d,NULL);
}

Node::Node(int d,Node *l, Node *r){
	Node(d,NULL,l,r);
} // Data, Left and Right

Node::Node(int d,Node *p){
	Node(d,p,NULL,NULL);
}// Data and Parent
	
Node::Node(int d,Node *p, Node *l, Node *r){
	_data = d;
	_parent = p;
	_left = l;
	_right = r;
	_next = NULL;
	_height = -1;
} // Data, Parent, Left and Right

int Node::data(){
	return _data;
}

void Node::data(int d){
	Node *n = new Node(d);
}

Node * Node::left(){
	return _left;
}

void Node::left(Node* l){
	_left = l;
}

Node * Node::right(){
	return _right;
}

void Node::right(Node* r){
	_right = r;
}

Node *Node::parent(){
	return _parent;
}
void Node::parent(Node* p){
	_parent = p;
}
int Node::height(){
	return _height;
}
void Node::height(int h){
	_height = h;
}

Node* Node::next() {
	return _next;
}

void Node::next(Node* n) {
	_next = n;
}