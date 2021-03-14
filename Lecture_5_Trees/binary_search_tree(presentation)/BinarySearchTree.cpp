//
// Created by user on 21/02/2021.
//
#include "BinarySearchTree.h"
#define BST BinarySearchTree
template<class T>
void BST<T>::insert(T val) {
	if(val < this->value && this->left != nullptr)
		this->left->insert(val);
	else if(val >= this->value && this->right != nullptr)
		this->right->insert(val);
	else if(val < this->value) this->insert_left(val);
	else this->insert_right(val);
}
template<class T>
void BST<T>::del(T val){
	tuple<bool, BST *, BST *> triplet = this->search_util(val);
	bool found = triplet[0];
	auto * node = triplet[1];
	auto * parent = triplet[2];
	if(found){
		if(node->count_children() == 0)	delete node;
		else if(node->count_children() == 1) {
			if(node->is_right_child(parent)){
				if(node->has_right_child())	parent->right = node->right;
				else parent->right = node->left;
				delete node;
			}
			else{
				if(!(node->has_right_child())) parent->left = node->left;
				else parent->left = node->right;
				delete node;
			}
		}
		else{
			auto * temp = min_value_node(node->right);
			node->key = temp->key;
			delete temp;
		}
	}
}
template<typename T>
BST<T>* BST<T>::search(T val){

}
template<class T>
int BST<T>::count_children(){
	int count = 0;
	if(this->left != nullptr) ++count;
	if(this->right != nullptr) ++count;
	return count;
}

template<typename T>
bool BST<T>::has_right_child(){
	return this->right != nullptr;
}

template <typename T>
bool BST<T>::is_right_child(BST<T> * parent){
	return parent->right == this;
}
template <typename T>
BST<T>* BST<T>::min_value_node(BST<T>* node){
	auto* curr = node;
	while(curr && curr->left != nullptr)
		curr = curr->left;
	return curr;
}
template <typename T>
tuple<bool, BST<T> *, BST<T> *> BST<T>::search_util(T val, BST * parent){
	if(val < this->value && this->left != nullptr)
		return this->left->search(val, this);
	else if(val > this->value && this->right != nullptr)
		return this->right->search(val, this);
	return make_tuple(this->value == val, parent, this);
}
