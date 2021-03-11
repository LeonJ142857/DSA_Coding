//
// Created by user on 11/03/2021.
//
#include <iostream>
#include "queueLinked.h"
queueLinked::queueLinked() {
	front = rear = nullptr;
}
bool queueLinked::is_empty() {
	return front == nullptr && rear == nullptr;
}
void queueLinked::insert(int element){
	Node* temp = new Node;
	temp->data = element;
	temp->next = nullptr;
	if(is_empty()) front = rear = temp;
	else{
		rear -> next = temp;
		rear = temp;
	}
	std::cout << element << " inserted at the back of the queue" << std::endl;
}

void queueLinked::delete_element() {
	if(is_empty()) std::cout << "Queue is empty, no more elements can be deleted" << std::endl;
	if(front == rear) front = rear = nullptr;
	else {
		Node* temp = front;
		front = front-> next;
		delete temp;
	}
}
void queueLinked::display() {
	auto it = front;
	if (is_empty()) std::cout << "Queue is empty" << std::endl;
	else{
		std::cout << "The elements of this queue (from front to back) is" << std::endl;
		while(it->next != nullptr){
			std::cout << it->data << ' ';
			it = it -> next;
		}
		std::cout << it->data << std::endl;
	}
}
int queueLinked::peek() {
	return front->data;
}
