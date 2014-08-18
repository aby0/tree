#include "queue.h"

Queue::Queue(){
}
void Queue::enqueue(Node *d){
	q.insert(d);
}
Node *Queue::dequeue(){
	return q.remove_from_beg();
}
Node *Queue::front(){
	return q.head();
}
Node *Queue::rear(){
	return q.tail();
}
int Queue::count(){
	return q.size();
}