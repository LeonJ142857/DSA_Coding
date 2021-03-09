//
// Created by user on 04/03/2021.
//

#ifndef DSA_CODING_STACKLINKED_H
#define DSA_CODING_STACKLINKED_H

#include <iostream>
struct node
{
	int data = 0;
	node *next = nullptr;
};

class stackLinked {
public:
	node* top = new node;
	node* push(int);
	void display();
	node* pop();
	bool is_empty();
	int peek();
};
node* stackLinked::push(int element) {
	node* n = new node;
	n->next = top;
	n->data = element;
	top = n;
	return top;
}
node* stackLinked::pop(){
	top->data = 0;
	node * n = top;
	top = top->next;
	free(n);
	return top;
}
void stackLinked::display(){
	node* n = top;
	std::cout << "These are the stack elements from top to bottom:" << std::endl;
	while(n->next != nullptr){
		std::cout << n->data << ' ';
		n = n->next;
	}
}
int stackLinked::peek(){
	return top->data;
}
bool stackLinked::is_empty() {
	return peek() != 0;
}




#endif //DSA_CODING_STACKLINKED_H
