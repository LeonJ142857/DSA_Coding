//
// Created by user on 14/03/2021.
//
#include "BST.cpp"
#include <iostream>
using namespace std;
int main(){
	auto* b = new BST<int>(50);
	b->insert(50);
	b->insert(30);
	b->insert(20);
	b->insert(40);
	b->insert(70);
	b->insert(60);
	b->insert(80);
	cout << "The in order traversal of the tree is: ";
	b->DFT_InOrder(); cout << endl;
	cout << "The pre order traversal of the tree is: ";
	b->DFT_PreOrder(); cout << endl;
	cout << "The post order traversal of the tree is: ";
	b->DFT_PostOrder(); cout << "\n\n";
	b->del(b, 50);
	b->del(b, 20);
	cout << "The in order traversal of the tree becomes: ";
	b->DFT_InOrder(); cout << endl;
	cout << "The pre order traversal of the tree becomes: ";
	b->DFT_PreOrder(); cout << endl;
	cout << "The post order traversal of the tree becomes: ";
	b->DFT_PostOrder(); cout << "\n\n";
	return 0;
}
