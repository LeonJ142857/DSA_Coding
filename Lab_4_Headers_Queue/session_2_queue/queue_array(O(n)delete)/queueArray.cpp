//
// Created by user on 10/03/2021.
//
#include "queueArray.h"
#include <iostream>
queueArray::queueArray(int size){
	MAX = size;
}
void queueArray::insert(int element) {
	rear < MAX-1 ?
		(rear += 1, queue[rear] = element) :
	rear += 0;
}
int queueArray::delete_element(){
	int val = queue[front];
	for(int i = 0; i <= rear; ++i)
		queue[i] = queue[i+1];
	--rear;
	return val < 0 ? -1 : val;
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
