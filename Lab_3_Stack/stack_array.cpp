//
// Created by user on 03/03/2021.
//
#include <iostream>
#include <string>
using namespace std;

template<typename T>
class Stack{
private:
	static const int MAX = 100;
	int top = -1;
	T st[MAX];
public:
	void push(T& input); //insert
	void pop(); //delete
	T peek();
	void display();
};

template<typename T>
void Stack<T>::push(T& input){
	if(top >= MAX){
		cout << "Stack Overflow" << endl;
	}
	++top;
	st[top] = input;
}
template <typename T>
void Stack<T>::pop(){
	if(top > -1) --top;
}
template <typename T>
T Stack<T>::peek(){
	return st[top];
}
template <typename T>
void Stack<T>::display(){
	for(int i = 0; i <= top; ++i) cout << st[i] << ' ';
}

int second_option(){
	cout << "1. PUSH\n2. POP\n3. PEEK\n4. DISPLAY\n5. EXIT" << endl;
	cout << "Your option: "; int option2; cin >> option2; return option2;
}

void opt_char(){
	int option2 = second_option();
	auto * stack = new Stack<char>();
	switch(option2){
		case 1:{
			cout << "Please input the element that you want to push: ";
			char input; cin >> input; stack->push(input);
			break;
		}
		case 2:{
			stack->pop();
			cout << "Topmost element is popped successfully." << endl;
			break;
		}
		case 3:{
			cout << "The topmost element of the stack is" << stack->peek() << endl;
			break;
		}
		case 4:{
			stack->display(); break;
		}
		default:{
			cout << "Wrong input, please try again." << endl;
			opt_char();
		}
	}
}
void opt_string(){
	int option2 = second_option();
	auto * stack = new Stack<string>();
	switch(option2){
		case 1:{
			cout << "Please input the element that you want to push: ";
			string input; cin >> input; stack->push(input);
			break;
		}
		case 2: {
			stack->pop();
			cout << "Topmost element is popped successfully." << endl;
			break;
		}	
		case 3:{
			cout << "The topmost element of the stack is" << stack->peek() << endl;
			break;
		}
		case 4:{
			stack->display(); break;
		}
		default:{
			cout << "Wrong input, please try again." << endl;
			opt_string();
		}
	}
}
void opt_int(){
	int option2 = second_option();
	auto * stack = new Stack<int>();
	switch(option2){
		case 1:{
			cout << "Please input the element that you want to push: ";
			int input; cin >> input; stack->push(input);
			break;
		}
		case 2: {
			stack->pop();
			cout << "Topmost element is popped successfully." << endl;
			break;
		}
		case 3:{
			cout << "The topmost element of the stack is" << stack->peek() << endl;
			break;
		}
		case 4:{
			stack->display(); break;
		}
		default:{
			cout << "Wrong input, please try again." << endl;
			opt_int();
		}
	}
}
void opt_float(){
	int option2 = second_option();
	auto * stack = new Stack<float>();
	switch(option2){
		case 1:{
			cout << "Please input the element that you want to push: ";
			float input; cin >> input; stack->push(input);
			break;
		}
		case 2: {
			stack->pop();
			cout << "Topmost element is popped successfully." << endl;
			break;
		}
		case 3:{
			cout << "The topmost element of the stack is" << stack->peek() << endl;
			break;
		}
		case 4:{
			stack->display(); break;
		}
		default:{
			cout << "Wrong input, please try again." << endl;
			opt_float();
		}
	}
}
void main_option(){
	cout << "What kind of stack do you want ?";
	cout << "1. char\n2. string\n3. int\n 4. float";
	int option1; cin >> option1;
	if (option1 == 1) opt_char();
	else if(option1 == 2) opt_string();
	else if(option1 == 3) opt_int();
	else if(option1 == 4) opt_float();
	else {
		cout << "Wrong input, please try again." << endl;
		main_option();
	}
	
};

int main(){
	cout << "***** Main Menu *****" << endl;
	main_option();
	
}

