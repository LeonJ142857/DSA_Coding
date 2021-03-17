//
// Created by user on 17/03/2021.
//

#ifndef DSA_CODING_QUEUEJOSEPHUS_H
#define DSA_CODING_QUEUEJOSEPHUS_H
struct Node {
	int player_id;
	Node* next;
};

class Queue {
private:
	Node *head, *front, *rear;
public:
	Queue();
	void enqueue(int x);
	void display();
	void move_next();
	int dequeue();

};
#include "QueueJosephus.cpp"
#endif //DSA_CODING_QUEUEJOSEPHUS_H
