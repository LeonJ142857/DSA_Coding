//
// Created by user on 10/03/2021.
//

#ifndef DSA_CODING_QUEUEARRAY_H
#define DSA_CODING_QUEUEARRAY_H


class queueArray
{
private:
	static const int MAX = 3;
	int front = 0;
	int queue[MAX];
	int rear = -1;

public:
	void insert(int);
	int delete_element();
	int peek();
	void display();
};

#endif //DSA_CODING_QUEUEARRAY_H
