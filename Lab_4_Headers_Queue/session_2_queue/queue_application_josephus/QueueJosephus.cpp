//
// Created by user on 17/03/2021.
//
#include <iostream>
#include "QueueJosephus.h"
using namespace std;
Queue::Queue(){
	head = new Node;
	head->next = nullptr;
	front = rear = head;
}
void Queue::enqueue(int x) {
	Node* p = new Node;
	p->player_id = x;
	if(head->next == nullptr){
		front = rear = p;
		head->next = p;
		p->next = p; //can also be p->next = front or p->next = rear
	}
	else{
		rear->next = p;
		p->next = front;
		rear = rear->next;
	}
}
void Queue::display() {
	Node* p = front;
	do{
		cout << p->player_id << endl;
		p = p->next;
	}while(p != rear->next);
}
void Queue::move_next() {
	front = front->next;
	rear = rear->next;
}
int Queue::dequeue() {
	int x; Node* t = front;
	x = t->player_id;
	front = front->next;
	rear->next = front;
	delete t;
	return x;
}