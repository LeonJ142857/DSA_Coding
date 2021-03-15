//
// Created by user on 21/02/2021.
//

#ifndef DSA_CODING_BINARYTREE_H
#define DSA_CODING_BINARYTREE_H

#endif //DSA_CODING_BINARYTREE_H
#include <iostream>
#include <queue>
using namespace std;

template<class T>
class BinaryTree{
public:
	explicit BinaryTree(T value)
	{
		this->value = value;
		this->left = nullptr;
		this->right = nullptr;
	}
	void insert_left(T val);
	void insert_right(T val);
	void DFT_PreOrder();
	void DFT_InOrder();
	void DFT_PostOrder();
	void BFT();
protected:
	T value;
	void* left;
	void* right;

};

