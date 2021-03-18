//
// Created by user on 11/03/2021.
//

#ifndef DSA_CODING_QUEUELINKED_H
#define DSA_CODING_QUEUELINKED_H

struct Node
{
	int data;
	Node* next;
};

class queueLinked
{
public:
	queueLinked();
	bool is_empty();
	void insert(int);
	void delete_element();
	void display();
	int peek();
private:
	Node* front;
	Node* rear;
};



#endif //DSA_CODING_QUEUELINKED_H
