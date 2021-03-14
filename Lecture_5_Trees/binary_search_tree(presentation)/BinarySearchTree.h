//
// Created by user on 21/02/2021.
//

#ifndef DSA_CODING_BINARYSEARCHTREE_H
#define DSA_CODING_BINARYSEARCHTREE_H
#include "../binary_tree/BinaryTree.h"
#include <tuple>
template<class T>
class BinarySearchTree: public BinaryTree<T>{
private:
	using BinaryTree<T>::value;
	using BinaryTree<T>::left;
	using BinaryTree<T>::right;
	int count_children();
	bool has_right_child();
	bool is_right_child(BinarySearchTree<T>*);
	BinarySearchTree<T>* min_value_node(BinarySearchTree<T>*);
	tuple<bool, BinarySearchTree *, BinarySearchTree *> search_util(T val, BinarySearchTree * parent);
public:
	void insert(T val);
	void del(T val);
	BinarySearchTree<T>* search(T val);
};


#endif //DSA_CODING_BINARYSEARCHTREE_H
