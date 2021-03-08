//
// Created by user on 03/03/2021.
//
#include <iostream>
using namespace std;

struct node
{
	int data = 0;
	node *next = nullptr;
};

class stackLinked {
	public:
		node* top = nullptr;
		node* push(int);
		void display();
		node* pop();
		bool is_empty();
		int peek();
};
node* stackLinked::push(int element) {
	node* n = new node;
	n->data = element;
	top->next = n;
	free(n);
	return top;
}
node* stackLinked::pop(){
	top->data = 0;
	top = top->next;
	return top;
}
void stackLinked::display(){
	node* n = top;
	while(n->next != nullptr){
		cout << n->data << ' ';
		n = n->next;
	}
	free(n);
}
int stackLinked::peek(){
	return top->data;
}
bool stackLinked::is_empty() {
	return peek() != 0;
}


void main_option(){
	static auto * stack = new stackLinked();
	cout << "These are the options:" << endl;
	cout << "1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT" << endl;
	cout << "Your option: "; string option; cin >> option;
	if(option == "1"){
		cout << "insert element: ";
		int element; cin >> element;
		stack->push(element);
	}
	else if(option == "2") stack->pop();
	else if(option == "3"){
		int top = stack->peek();
		cout << "The top of the stack is: " << top << endl;
	}
	else if(option == "4") stack->display();
	else if(option == "5") return;
	else{
		cout << "Invalid input, please input a number between 1 and 4 inclusive." << endl;
		main_option();
	}
	main_option();
}


int main(){
	cout << "***** Main Menu *****" << endl;
	main_option();
}
