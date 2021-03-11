//
// Created by user on 10/03/2021.
//
#include "queueArrayCircular.cpp"
#include <iostream>
using namespace std;

void main_option(queueArrayCircular* queue){
	cout << "These are the options:" << endl;
	cout << "1. INSERT(enqueue an element)\n2. DELETE(dequeue an element)\n3. PEEK\n4. DISPLAY\n5. EXIT" << endl;
	cout << "Your option: "; string option; cin >> option;
	if(option == "1"){
		cout << "insert element: ";
		int element; cin >> element;
		queue->insert(element);
	}
	else if(option == "2") queue->delete_element();
	else if(option == "3"){
		int top = queue->peek();
		cout << "The front of the queue is: " << top << endl;
	}
	else if(option == "4") queue->display();
	else if(option == "5") return;
	else{
		cout << "Invalid input, please input a number between 1 and 4 inclusive." << endl;
		main_option(queue);
	}
	main_option(queue);
}


int main(){
	auto * queue = new queueArrayCircular(5);
	cout << "***** Main Menu *****" << endl;
	main_option(queue);
}
