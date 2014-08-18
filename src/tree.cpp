#include "tree.h"

using namespace std;

tree::tree():tree(NULL){
}

tree::tree(Node *n){
	root = n;
	_size = 0;
	_height = -1;
}

Node* tree::bfs(Node* find = NULL) {
	Queue q;
	q.enqueue(root);
	root->height(0);
	Node* n = NULL;
	while(q.count() > 0) {
		n = q.dequeue();
		if(find && find->data() == n->data()) return n;
		if(n->left()) {
			n->left()->height(n->height() + 1);
			q.enqueue(n->left());
		}
		
		if(n->right()) {
			n->right()->height(n->height() + 1);
			q.enqueue(n->right());
		}
	}
	if(n){
		_height = n->height();
	}
	return NULL;
}

//ostream& operator<<(ostream& os, tree& t) {

int tree::height(Node* n){
	Node* p = bfs(n);
	if(!p) return -1;
	return p->height();
}

int tree::height(){
	if(-1 == _height) bfs();
	return _height; 
}

bool tree::islevel(Node* a,Node* b){
	return height(a) == height(b);
}

void tree::create_level(){
	Node* n = root;
	bfs();
	while(n){
		Node* next = n->next();
		if(!islevel(n,n->next())) n->next(NULL);
		n = next;
	}
	
}

void tree::add_left(Node* a,Node* p){
	p->left(a);
	a->parent(p);
}

void tree::add_right(Node* b,Node* p){
	p->right(b);
	b->parent(p);
}

bool tree::is_sibling(Node* a,Node* b){
	return a->parent() == b->parent();
}
bool tree::is_cousin(Node* a,Node* b){
	return (islevel(a,b) && !is_sibling(a,b));
}