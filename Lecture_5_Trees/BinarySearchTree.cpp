//
// Created by user on 21/02/2021.
//
#include "BinaryTree.h"
#include <tuple>
template<class T>
class BinarySearchTree: public BinaryTree<T>{
private:
	using BinaryTree<T>::value;
	using BinaryTree<T>::left;
	using BinaryTree<T>::right;
	int count_children();
	tuple<bool, BinarySearchTree *, BinarySearchTree *> search(T val, BinarySearchTree * parent);
public:
	void insert(T val);
	void del(T val);
	};

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
	tuple<bool, BST *, BST *> triplet = this->search(val);
	bool found = triplet[0];
	auto * node = triplet[1];
	auto * parent = triplet[2];
	if(found){
		if(node->count_children() == 0) {
			if(node == parent->right_child){
				parent->right = nullptr;
				delete node;
			}
			else{
				parent->left = nullptr;
				delete node;
			}
		}
		else if(node->count_children() == 1) {
			if(node == parent->right_child){
				if(node->left)
			}
			else{
				parent->left = nullptr;
				delete node;
			}
		}
		else if(node->count_children() == 2){

		}
	}
}
template<class T>
int BST<T>::count_children(){
	int count = 0;
	if(this->left != nullptr) ++count;
	if(this->right != nullptr) ++count;
	return count;
}
template<class T>
tuple<bool, BST<T> *, BST<T> *> BST<T>::search(T val, BST * parent){
	if(val < this->value && this->left != nullptr)
		return this->left->search(val, this);
	else if(val > this->value && this->right != nullptr)
		return this->right->search(val, this);
	return make_tuple(this->value == val, parent, this);
}
