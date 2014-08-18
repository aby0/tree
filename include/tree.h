#ifndef __tree_h__
#define __tree_h__

#include "queue.h"

class tree{
public:
	tree();
	tree(Node*);
	int height(Node*);
	int height();
	int size();
	//friend ostream& operator<<(ostream&, tree &);
	Node* bfs(Node*);
	bool islevel(Node*, Node*);
	void create_level();

	bool is_sibling(Node* , Node*);
	bool is_cousin(Node* , Node*);

	void add_left(Node*, Node* );
	void add_right(Node* , Node*);
private:
	Node* root;
	int _size;
	int _height;
};

#endif
