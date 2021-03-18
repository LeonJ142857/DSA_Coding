//
// Created by user on 10/03/2021.
//
#include "queueArray.cpp"
#include <iostream>
using namespace std;

void main_option(queueArray* queue){
	cout << "These are the options:" << endl;
	cout << "1. INSERT(enqueue an element)\n2. DELETE(dequeue an element)\n3. FRONT\n"
		 "4. REAR\n5. DISPLAY\n6. CHECK IF FULL\n7. CHECK IF EMPTY\n8. EXIT" << endl;
	cout << "Your option: "; string option; cin >> option;
	if(option == "1"){
		cout << "enqueue element: ";
		int element; cin >> element;
		queue->enqueue(element);
	}
	else if(option == "2") queue->dequeue();
	else if(option == "3"){
		int front = queue->get_front();
		cout << "The front of the queue is: " << front << endl;
	}
	else if(option == "4"){
		int rear = queue->get_rear();
		cout << "The rear of the queue is: " << rear << endl;
	}
	else if(option == "5") queue->display();
	else if(option == "6") cout << (queue->is_full() ? "True" : "False") << endl;
	else if (option == "7") cout << (queue->is_empty() ? "True" : "False") << endl;
	else if(option == "8") return;
	else{
		cout << "Invalid input, please input a number between 1 and 8 inclusive." << endl;
		main_option(queue);
	}
	main_option(queue);
}


int main(){
	auto * queue = new queueArray(3);
	cout << "***** Main Menu *****" << endl;
	main_option(queue);
}
