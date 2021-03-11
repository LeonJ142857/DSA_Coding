//
// Created by user on 10/03/2021.
//

#ifndef DSA_CODING_QUEUEARRAY_H
#define DSA_CODING_QUEUEARRAY_H


class queueArray
{
private:
	int MAX;
	static const int front = 0;
	int * queue;
	int rear = -1;

public:
	queueArray(int);
	void insert(int);
	int delete_element();
	int peek();
	void display();
};

#endif //DSA_CODING_QUEUEARRAY_H
