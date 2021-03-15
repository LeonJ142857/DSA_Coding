//
// Created by user on 21/02/2021.
//
#include "BST.h"

template<typename T>
void BST<T>::insert(T val){
	if(val < this->value && this->left != nullptr)
		((BST<T>*)(this->left))->insert(val);
	else if(val >= this->value && this->right != nullptr)
		((BST<T>*)(this->right))->insert(val);
	else if(val < this->value)
		this->insert_left(val);
	else this->insert_right(val);
}

template<class T>
BST<T>* BST<T>::del(BST<T>* root, T val){
	if (root == nullptr)
		return root;
	if (val < root->value)
		root->left = del((BST<T>*)(root->left), val);
	else if (val > root->value)
		root->right = del((BST<T>*)(root->right), val);
	else {
		if (root->left == nullptr) {
			auto* temp = (BST<T>*)(root->right);
			delete root;
			return temp;
		}
		else if (root->right == nullptr) {
			auto* temp = (BST<T>*)(root->left);
			delete root;
			return temp;
		}
		BST<T>* temp = min_value_node((BST<T>*)(root->right));
		root->value = temp->value;
		root->right = del((BST<T>*)(root->right), temp->value);
	}
	return root;
}
template<class T>
BST<T>* BST<T>::search(BST<T>* root, T val){
	if (root == NULL || root->value == val)
		return root;
	if (root->value < val)
		return search((BST<T>*)(root->right), val);
	return search((BST<T>*)(root->left), val);
}
template <typename T>
BST<T>* BST<T>::min_value_node(BST<T>* node){
	auto* curr = node;
	while(curr && curr->left != nullptr)
		curr = (BST<T>*)(curr->left);
	return curr;
}
