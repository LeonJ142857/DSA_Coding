//
// Created by user on 10/03/2021.
//
#include "queueArrayCircular.h"
#include <iostream>
queueArrayCircular::queueArrayCircular(int size){
	MAX = size;
	queue = std::vector<int>(MAX);
	rear = front = -1;
}
bool queueArrayCircular::is_full() {
	return front == (rear + 1) % MAX;
}
bool queueArrayCircular::is_empty() {
	return front == -1;
}
void queueArrayCircular::insert(int element) {
	if(is_full())
		std::cout << "Queue is full" << std::endl;
	else{
		if(front == -1) ++front;
		rear = (rear + 1) % MAX;
		queue[rear] = element;
	}
}
int queueArrayCircular::delete_element() {
	int element;
	if(is_empty()) std::cout << "Queue is empty" << std::endl;
	else{
		element = queue[front];
		if(front == rear){
			front = -1;
			rear = -1;
		}
		else front = (front + 1) % MAX;
	}
	return element;
}
void queueArrayCircular::display() {
	if(is_empty()) std::cout << "Queue is empty" << std::endl;
	int i;
	for(i = front; i != rear; i = (i + 1) % MAX)
		std::cout << queue[i] << " ";
	std::cout << queue[i] << std::endl;
}
int queueArrayCircular::peek() {
	return queue[front];
}


