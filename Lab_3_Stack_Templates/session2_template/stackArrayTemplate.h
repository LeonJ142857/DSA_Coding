//
// Created by user on 09/03/2021.
//

#ifndef DSA_CODING_STACKARRAYTEMPLATE_H
#define DSA_CODING_STACKARRAYTEMPLATE_H
//
// Created by user on 04/03/2021.
//

#ifndef DSA_CODING_STACK_ARRAY_H
#define DSA_CODING_STACK_ARRAY_H

#include <iostream>
using namespace std;

template <typename T>
class stackArray{
private:
	static const int MAX = 100;
	int top = -1;
	T st[MAX];
public:
	void push(int& input); //insert
	void pop(); //delete
	T peek();
	void display();
	bool isEmpty();
};

template <typename T>
void stackArray<T>::push(int& input){
	if(top >= MAX){
		cout << "Stack Overflow" << endl;
	}
	++top;
	st[top] = input;
}
template <typename T>
void stackArray<T>::pop(){
	if(top > -1) --top;
}
template <typename T>
T stackArray<T>::peek(){
	return st[top];
}
template <typename T>
void stackArray<T>::display(){
	for(int i = 0; i <= top; ++i) cout << st[i] << ' ';
	cout << endl;
}
template <typename T>
bool stackArray<T>::isEmpty() {
	return top == -1;
}


#endif //DSA_CODING_STACK_ARRAY_H

#endif //DSA_CODING_STACKARRAYTEMPLATE_H
