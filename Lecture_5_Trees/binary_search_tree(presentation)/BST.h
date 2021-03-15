//
// Created by user on 21/02/2021.
//

#ifndef DSA_CODING_BST_H
#define DSA_CODING_BST_H
#include "../binary_tree(presentation)/BinaryTree.cpp"
#include <tuple>
template<class T>
class BST:public BinaryTree<T>{
public:
	using BinaryTree<T>::BinaryTree;
	void insert(T val);
	BST<T>* del(BST<T>* root, T val);
	BST<T>* search(BST<T>*, T val);
private:
	int count_children();
	bool has_right_child();
	bool is_right_child(BST<T>*);
	BST<T>* min_value_node(BST<T>*);
	tuple<bool, BST *, BST *> search_util(T val, BST * parent);
};

#endif //DSA_CODING_BST_H
