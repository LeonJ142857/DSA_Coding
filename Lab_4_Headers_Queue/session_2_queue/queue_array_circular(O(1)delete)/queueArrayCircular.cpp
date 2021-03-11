//
// Created by user on 10/03/2021.
//
#include "queueArray.h"
#include <iostream>
void queueArray::insert(int element) {
	rear += (rear < MAX-1 ? 1 : 0);
	queue[rear] = element;
}
int queueArray::delete_element() {
	int val;
	if(front != rear){
		val = queue[front];
		++front;
	}
	return front == rear ? -1 : val;
}
int queueArray::peek(){
	return rear >= 0 ? queue[front] : -1;
}
void queueArray::display(){
	std::cout << "The queue elements (from front to back) are  :";
	if(rear >= 0){
		for(int i = front; i <= rear; ++i)
			std::cout << queue[i] << " ";
	}
}