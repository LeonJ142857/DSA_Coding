//
// Created by user on 14/03/2021.
//
#include "BinaryTree.cpp"
int main(){
	auto * a_node = new BinaryTree('a');
	a_node->insert_left('b');
	a_node->insert_right('c');

	auto * b_node = a_node->left;
	b_node->insert_right('d');

	auto * c_node = a_node->right;
	c_node->insert_left('e');
	c_node->insert_right('f');

	auto * d_node = b_node->right;
	auto * e_node = c_node->left;
	auto * f_node = c_node->right;
	cout << "The Depth First pre-order Traversal of this tree is : ";
	a_node->DFT_PreOrder(); cout << endl;
	cout << "The Depth First in-order Traversal of this tree is : ";
	a_node->DFT_InOrder(); cout << endl;
	cout << "The Depth First post-order Traversal of this tree is : ";
	a_node->DFT_PostOrder(); cout << endl;
	cout << "The Breadth First Traversal of this tree is : ";
	a_node->BFT(); cout << endl;
	return 0;
}


