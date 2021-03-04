//
// Created by user on 04/03/2021.
//

#ifndef DSA_CODING_STACK_ARRAY_H
#define DSA_CODING_STACK_ARRAY_H

#include <iostream>
using namespace std;
class stackArray{
private:
	static const int MAX = 100;
	int top = -1;
	int st[MAX];
public:
	void push(int& input); //insert
	void pop(); //delete
	int peek();
	void display();
	bool isEmpty();
};

void stackArray::push(int& input){
	if(top >= MAX){
		cout << "Stack Overflow" << endl;
	}
	++top;
	st[top] = input;
}
void stackArray::pop(){
	if(top > -1) --top;
}
int stackArray::peek(){
	return st[top];
}
void stackArray::display(){
	for(int i = 0; i <= top; ++i) cout << st[i] << ' ';
	cout << endl;
}
bool stackArray::isEmpty() {
	return top == -1;
}


#endif //DSA_CODING_STACK_ARRAY_H
