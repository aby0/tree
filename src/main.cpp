#include <iostream>
#include "tree.h"

using namespace std;

int main(int argc, char* argv[]) {
	Node a(1),b(2),c(3),d(4),e(6);
	tree t(&a);
	t.add_left(&b,&a);
	t.add_right(&c,&a);
	t.add_left(&d,&b);
	t.add_right(&e,&b);

	cout<< "b and c are siblings or not : " <<t.is_sibling(&b,&c);




	return 0;
}