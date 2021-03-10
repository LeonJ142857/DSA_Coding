//
// Created by user on 09/03/2021.
//

#ifndef DSA_CODING_STACKLINKED_H
#define DSA_CODING_STACKLINKED_H
template<typename T>
struct node
{
	T data = 0;
	node* next = nullptr;
};

template<typename T>
class stackLinked {
public:
	node<T>* top = new node<T>;
	node<T>* push(int);
	void display();
	node<T>* pop();
	bool is_empty();
	T peek();
};

template <typename T>
node<T>* stackLinked<T>::push(int element) {
	auto* n = new node<T>;
	n->next = top;
	n->data = element;
	top = n;
	return top;
}
template <typename T>
node<T>* stackLinked<T>::pop(){
	top->data = 0;
	node<T> * n = top;
	top = top->next;
	free(n);
	return top;
}
template <typename T>
void stackLinked<T>::display(){
	node<T>* n = top;
	std::cout << "These are the stack elements from top to bottom:" << std::endl;
	while(n->next != nullptr){
		std::cout << n->data << ' ';
		n = n->next;
	}
}
template <typename T>
T stackLinked<T>::peek(){
	return top->data;
}
template <typename T>
bool stackLinked<T>::is_empty() {
	return peek() != 0;
}
#endif //DSA_CODING_STACKLINKED_H
