//
// Created by user on 17/03/2021.
//
#include <iostream>
using namespace std;
struct Node{
	int data;
	struct Node* next;
};
void printList(struct Node* n){
	while(n != NULL){
		cout << n->data << endl;
		n = n->next;
	}
}
int main(){
	Node* start, *ptr;
	int howmany;
	cout << "n= ";
	cin >> howmany;
	start = new Node;
	ptr = start;
	for(int i = 1; i <= howmany; ++i){
		cin >> ptr->data;
		if(i != howmany){
			ptr->next = new Node;
			ptr = ptr->next;
		}
		else{
			ptr->next = NULL;
			ptr = NULL;
		}
	}
}
