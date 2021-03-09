//
// Created by user on 09/03/2021.
//

#include <iostream>
#include "stackLinkedTemplate.h"
using namespace std;

void main_option(stackLinked<int>* stack){
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
		main_option(stack);
	}
	main_option(stack);
}


int main(){
	auto * stack = new stackLinked<int>();
	cout << "***** Main Menu *****" << endl;
	main_option(stack);
}
