//
// Created by user on 02/04/2021.
//

#include "PriorityQueueDoublyLinked.h"
#include <iostream>
#include <cstring>
PriorityQueueDoublyLinked::PriorityQueueDoublyLinked() {
	front = rear = nullptr;
	length = 0;
}
void PriorityQueueDoublyLinked::push(char *name, char* extension, int size) {
	Node* node = new Node(name, extension, size);
	if(front == nullptr && rear == nullptr){
		front = rear = node;
		node->next = nullptr;
	}
	else{
		if(size < front->size){
			node->next = front;
			front->prev = node;
			front = node;
		}
		else if (size >= rear->size){
			node->prev = rear;
			rear->next = node;
			rear = node;
		}
		else{
			Node* start = front->next;
			while(front->size > size)
				start = start->next;
			start->prev->next = node;
			node->prev = start->prev;
			node->next = start;
			start->prev = node;
		}
	}
	++size;
}

int PriorityQueueDoublyLinked::delete_elements(const char* extension) {
	Node* temp = front;
	int num_deleted = 0;
	while(temp != rear){
		pop(&temp, extension);
		++num_deleted;
	}
	length -= num_deleted;
	return num_deleted;
}
Node* PriorityQueueDoublyLinked::pop(Node** node, const char* extension){
	while((*node)->extension != extension)
		*node = (*node)->next;
	Node* temp = (*node)->next;
	temp->prev = (*node)->prev;
	delete *node;
	return temp;
}
int PriorityQueueDoublyLinked::get_total_size() {
	Node* temp = front;
	int total_size = 0;
	while(temp != nullptr){
		total_size += temp->size;
		temp = temp->next;
	}
	return total_size;
}
Node * PriorityQueueDoublyLinked::peek(){return front;}
void PriorityQueueDoublyLinked::display() {
	int i = 0;
	Node* temp = front;
	printf("No | Name                      |  Size");
	while(i < length){
		printf("%s. |");
		for(int j = 0; j < 25-(strlen(temp->name) + 1 + strlen(temp->extension); ++j)
			printf(" ");
		printf("   |");

		++i;
	}
}
