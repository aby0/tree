#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char* argv[]) {
	Node a(1);
	tree t(&a);

	a.left(new Node(2));
	a.right(new Node(3));

	a.left()->left(new Node(4));
	a.left()->right(new Node(5));

	cout << t.height() << endl;

	return 0;
}