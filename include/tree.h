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
private:
	Node* root;
	int _size;
	int _height;
};

#endif
