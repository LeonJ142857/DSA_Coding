#include <iostream>
#include <cstring>
#include <string>
#include "hash.h"
using namespace std;

BucketHashTable::BucketHashTable(HashBucket* ht)
{
	HASH_TABLE = ht;
}

BucketHashTable::~BucketHashTable()
{
	delete(HASH_TABLE);
}


int BucketHashTable::sum_digits(int input, int base){
	return input == 0 ? 0 : input%base +
		sum_digits(input/base, base);
}

int BucketHashTable::folding(string input){
	int key;
	int charSum = 0;
	int digitSum = 0;
	int length = input.size();
	
	for(int i=0 ; i<length ; i++){
		charSum += input[i];
	}
	
	digitSum = sum_digits(charSum, MAX_DATA);
	
//	cout<< "charSum  = " << charSum << " \n";
//	cout<< "digitSum = " << digitSum << " \n";
//	cout << "key	 = " << digitSum % MAX_DATA << " \n";
	
	return digitSum % MAX_DATA;
}

int BucketHashTable::division(string input){
	int key;
	int charSum = 0;
	int length = input.size();
	for(int i=0 ; i<length ; i++){
		charSum += input[i];
	}
	key = charSum % MAX_DATA;
	return key;
}

Node* BucketHashTable::create_node(string data){
	Node *node = new Node;
	node->data = data;
//	node->key = division(data);
	node->key = folding(data);
//	cout << node->key << "\n";
	node->next = nullptr;
	return node;
}

void BucketHashTable::push_data(Node *node){
	int key = node->key;
	Node* ptr = HASH_TABLE[key].head;
	if(ptr == nullptr){
		HASH_TABLE[key].head = HASH_TABLE[key].tail =  node;
		return;
	}
	while(ptr != HASH_TABLE[key].tail)
		ptr = ptr->next;
	ptr = HASH_TABLE[key].tail;
	HASH_TABLE[key].tail = node;
	ptr->next = HASH_TABLE[key].tail;
}

void BucketHashTable::delete_data(const string& data) {
	int key = folding(data);
	Node* ptr = HASH_TABLE[key].head;
	if(ptr->data == data){
		HASH_TABLE[key].head->next = ptr->next;
		delete ptr;
		return;
	}
	Node* ptr2 = ptr->next;
	if(!ptr2) return;
	while(ptr2->data != data){
		if(!(ptr2->next)) return;
		ptr = ptr->next;
		ptr2 = ptr2->next;
	}
	ptr->next = ptr2->next;
	delete ptr2;
}
void BucketHashTable::view_data(){
	for(int i=0 ; i<MAX_DATA ; i++){
		cout << "  Key[" << i << "]: ";
		Node *curr = HASH_TABLE[i].head;
		while(curr){
			cout << curr->data << " -> ";
			curr = curr->next;
		}
		cout << "(null)\n";
	}
}

