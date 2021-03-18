//
// Created by user on 17/03/2021.
//

#ifndef DSA_CODING_QUEUELINKEDCIRCULAR_H
#define DSA_CODING_QUEUELINKEDCIRCULAR_H
struct Node {
	int player_id;
	Node* next;
};

class QueueLinkedCircular {
private:
	Node *head, *front, *rear;
public:
	QueueLinkedCircular();
	void enqueue(int x);
	void display();
	void move_next();
	int dequeue();
	int top();

};
#include "QueueLinkedCircular.cpp"
#endif //DSA_CODING_QUEUELINKEDCIRCULAR_H
