#define MAX_DATA 10
#ifndef HASH_H
#define HASH_H
#include <string>
using namespace std;
typedef struct data{
	int age;
	string date_of_birth;
	string address;
} Data;

struct Node{
	int key = 0;
	string data;
	struct Node *next = nullptr;
};

struct HashBucket{
	int number_of_node = 0;
	Node* head = nullptr;
	Node* tail = nullptr;
};

class BucketHashTable
{
private:
	HashBucket* HASH_TABLE;
	
public:
	explicit BucketHashTable(HashBucket*);
	~BucketHashTable();
	int sum_digits(int input, int base);
	int folding(string input);
	int division(string input);
	Node* create_node(string data);
	void push_data(Node *node);
	void delete_data(const string& data);
	void view_data();
};
#include "hash.cpp"
#endif

