//
// Created by user on 02/04/2021.
//

#ifndef DSA_CODING_PRIORITYQUEUEDOUBLYLINKED_H
#define DSA_CODING_PRIORITYQUEUEDOUBLYLINKED_H

struct Node{
	Node *prev, *next;
	char* name;
	char*extension;
	int size;
	Node(char* name, char* extension, int size){
		this->extension = extension;
		this->name = name;
		this->size = size;
	}
};
class PriorityQueueDoublyLinked {
private:
	Node *front, *rear;
	int length;
public:
	PriorityQueueDoublyLinked();
	void push(char* name, char* extension, int size);
	int delete_elements(const char* extension);
	Node* pop(Node** node, const char* extension);
	Node* peek();
	int get_total_size();
	void display();

};
#include "PriorityQueueDoublyLinked.cpp"

#endif //DSA_CODING_PRIORITYQUEUEDOUBLYLINKED_H
