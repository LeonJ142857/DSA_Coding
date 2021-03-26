//
// Created by user on 26/03/2021.
//
#define MAX_DATA 10
#ifndef DSA_CODING_BUCKETHASHTABLE_H
#define DSA_CODING_BUCKETHASHTABLE_H

#include <string>
#include <utility>
#include <vector>
using namespace std;
struct Data{
	string name;
	string date_of_birth;
	int age;
	string address;
	Data(string name, string date_of_birth, int age, string address){
		this->name = move(name);
		this->date_of_birth = move(date_of_birth);
		this->age = age;
		this->address = move(address);
	}
};

struct Node{
	int key = 0;
	Data* data = nullptr;
	Node* next = nullptr;
};

struct HashBucket{
	int number_of_node = 0;
	Node* head = nullptr;
	Node* tail = nullptr;
};

class BucketHashTable
{
private:
	vector<HashBucket> HASH_TABLE;

public:
	explicit BucketHashTable(vector<HashBucket>);
	int sum_digits(int input, int base);
	int folding(string name, string date_of_birth);
	Node* create_node(Data* data);
	void push_data(Node *node);
	bool check_data(Data* data, string name, string date_of_birth);
	void delete_data(string name, string date_of_birth);
	void view_data();
};

#include "BucketHashTable.cpp"
#endif //DSA_CODING_BUCKETHASHTABLE_H
