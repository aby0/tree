#include "queue.h"

Queue::Queue(){
	_count = 0;
}
void Queue::enqueue(Node *d){
	q.insert(d);
	++_count;
}
Node *Queue::dequeue(){
	_count--;
	return q.remove_from_beg();
}
Node *Queue::front(){
	return q.head();
}
Node *Queue::rear(){
	return q.tail();
}
int Queue::count(){
	return _count;
}