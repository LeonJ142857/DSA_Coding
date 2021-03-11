//
// Created by user on 10/03/2021.
//

#ifndef DSA_CODING_QUEUEARRAYCIRCULAR_H
#define DSA_CODING_QUEUEARRAYCIRCULAR_H
#include <vector>

class queueArrayCircular
{
private:
	int MAX;
	std::vector<int> queue;
	int rear, front;
public:
	explicit queueArrayCircular(int);
	bool is_full();
	bool is_empty();
	void insert(int);
	int delete_element();
	void display();
	int peek();
};

#endif //DSA_CODING_QUEUEARRAYCIRCULAR_H
