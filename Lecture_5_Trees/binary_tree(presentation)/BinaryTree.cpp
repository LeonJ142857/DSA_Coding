//
// Created by user on 21/02/2021.
//
#include "BinaryTree.h"
template<class T>
void BinaryTree<T>::insert_left(T val){
	if(this->left == nullptr) this->left = new BinaryTree(val);
	else
	{
		auto * new_node = new BinaryTree(val);
		new_node->left = this->left;
		this->left = new_node;
	}
}
template<class T>
void BinaryTree<T>::insert_right(T val){
	if(this->right == nullptr) this->right = new BinaryTree(val);
	else
	{
		auto * new_node = new BinaryTree(val);
		new_node->right = this->right;
		this->right = new_node;
	}
}
template<class T>
void BinaryTree<T>::DFT_PreOrder(){
	cout << this->value << ", ";
	if(this->left != nullptr) this->left->DFT_PreOrder();
	if(this->right != nullptr) this->right->DFT_PreOrder();
}

template<class T>
void BinaryTree<T>::DFT_InOrder(){
	if(this->left != nullptr)  this->left->DFT_InOrder();
	cout << this->value << ", ";
	if(this->right != nullptr) this->right->DFT_InOrder();
}
template<class T>
void BinaryTree<T>::DFT_PostOrder(){
	if(this->left != nullptr) this->left->DFT_PostOrder();
	if(this->right != nullptr) this->right->DFT_PostOrder();
	cout << this->value << ", ";
}
template<class T>
void BinaryTree<T>::BFT(){
	queue<BinaryTree*> q;
	q.push(this);
	while(!q.empty()){
		auto curr = q.front();
		cout << curr->value << ", ";
		q.pop();
		if (curr->left != nullptr) q.push(curr->left);
		if (curr->right != nullptr) q.push(curr->right);
	}
}