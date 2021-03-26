//
// Created by user on 26/03/2021.
//

#include "BucketHashTable.h"
#include <iostream>
#include <cstring>
#include <string>
using namespace std;

BucketHashTable::BucketHashTable(vector<HashBucket> ht)
{
	HASH_TABLE = ht;
}

int BucketHashTable::sum_digits(int input, int base){
	return input == 0 ? 0 : input%base +
							sum_digits(input/base, base);
}

int BucketHashTable::folding(string name, string date_of_birth){
	int key;
	int charSum = 0;
	int digitSum = 0;
	for(const auto& ch : name)
		charSum += ch;
	for(const auto& ch : date_of_birth)
		charSum += ch;
	digitSum = sum_digits(charSum, MAX_DATA);

//	cout<< "charSum  = " << charSum << " \n";
//	cout<< "digitSum = " << digitSum << " \n";
//	cout << "key	 = " << digitSum % MAX_DATA << " \n";

	return digitSum % MAX_DATA;
}

Node* BucketHashTable::create_node(Data* data){
	Node *node = new Node;
	node->data = data;
//	node->key = division(data);
	node->key = folding(data->name, data->date_of_birth);
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
bool BucketHashTable::check_data(Data* data, string name, string date_of_birth)
{
	return data->name == name && data->date_of_birth == date_of_birth;
}
void BucketHashTable::delete_data(
		string name, string date_of_birth)
{
	int key = folding(name, date_of_birth);
	Node* ptr = HASH_TABLE[key].head;
	if(check_data(ptr->data, name, date_of_birth)){
		HASH_TABLE[key].head = ptr->next;
		delete ptr;
		return;
	}
	Node* ptr2 = ptr->next;
	if(!ptr2) return;
	while(check_data(ptr2->data, name, date_of_birth)){
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
			cout << curr->data->name << ", "
			<< curr->data->date_of_birth << ", "
			<< curr->data->age << ", "
			<< curr->data->address << endl << " -> ";
			curr = curr->next;
		}
		cout << "(null)\n";
	}
}

