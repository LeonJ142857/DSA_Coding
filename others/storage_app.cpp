//
// Created by user on 02/04/2021.
//
#include "Priority_Queue_Doubly_Linked/PriorityQueueDoublyLinked.h"
#include <iostream>
using namespace std;
int main(){
	auto *storage = new PriorityQueueDoublyLinked();
	int space = 4096;
	printf("Hello welcome to a simple file storage system\n");
	printf("Available Space: %d MB", space-storage->get_total_size());
	cout << "1. Add New File"
}