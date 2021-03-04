//
// Created by user on 03/03/2021.
//
#include <iostream>
#include <string>
using namespace std;

class Stack{
private:
	static const int MAX = 100;
	int top = -1;
	int st[MAX];
public:
	void push(int& input); //insert
	void pop(); //delete
	int peek();
	void display();
};

void Stack::push(int& input){
	if(top >= MAX){
		cout << "Stack Overflow" << endl;
	}
	++top;
	st[top] = input;
}
void Stack::pop(){
	if(top > -1) --top;
}
int Stack::peek(){
	return st[top];
}
void Stack::display(){
	for(int i = 0; i <= top; ++i) cout << st[i] << ' ';
	cout << endl;
}

void main_option(){
	static auto * stack = new Stack();
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
