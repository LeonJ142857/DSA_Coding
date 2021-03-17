//
// Created by user on 17/03/2021.
//
#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* next;
};
void printList(struct Node* n){
	while(n != NULL){
		printf("%d", n->data);
		n = n->next;
	}
}

int main(){
	struct Node* head = NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	head = (struct Node*)(malloc(sizeof(struct Node)));
	second = (struct Node*)(malloc(sizeof(struct Node)));
	third = (struct Node*)(malloc(sizeof(struct Node)));


}