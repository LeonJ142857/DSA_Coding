//
// Created by user on 31/03/2021.
//
#include "TicTacToe.h"
#include <iostream>
using namespace std;


TicTacToe::TicTacToe() {
	Node* up_left = head;
	Node* up = new Node();
	Node* up_right = new Node();
	Node* right = new Node();
	Node* mid = new Node();
	Node* left = new Node();
	Node* down_left = new Node();
	Node* down = new Node();
	Node* down_right = new Node();

	up_left->right = up;
	up_left->down_right = mid;
	up_left->down = left;

	up->right = up_right;
	up->down_right = right;
	up->down = mid;
	up->down_left = left;
	up->left = up_left;

	up_right->down = right;
	up_right->left = up;
	up_right->down_left = mid;

	left->up = up_left;
	left->up_right = up;
	left->right = mid;
	left->down_right = down;
	left->down = down_left;

	mid->up_left = up_left;
	mid->up = up;
	mid->up_right = up_right;
	mid->left = left;
	mid->right = right;
	mid->down_left = down_left;
	mid->down = down;
	mid->down_right = down_right;

	right->up = up_right;
	right->up_left = up;
	right->left = mid;
	right->down_left = down;
	right->down = down_right;

	down_left->up = left;
	down_left->up_right = mid;
	down_left->right = down;

	down->left = down_left;
	down->up_left = left;
	down->up = mid;
	down->up_right = right;
	down->right = down_right;

	down_right->up = right;
	down_right->up_left = mid;
	down_right->left = down;

	up_left->chip = '_';
	up->chip = '-';
	up_right->chip = '-';
	right->chip = '-';
	mid->chip = '-';
	left->chip = '-';
	down_left->chip = '-';
	down->chip = '-';
	down_right->chip = '-';
}

Node * TicTacToe::getHead() {return head;}

void TicTacToe::display() {
	Node* ptr1 = head, *ptr2 = head->down, *ptr3 = head->down->down;
	while(ptr1){
		cout << ptr1->chip;
		ptr1 = ptr1->right;
	}
	cout << endl;
	while(ptr2){
		cout << ptr2->chip;
		ptr2 = ptr2->right;
	}
	cout << endl;
	while(ptr3){
		cout << ptr3->chip;
		ptr3 = ptr3->right;
	}
	cout << endl;
}
void TicTacToe::moveUtil(Node *next_cursor) {
	cursor->chip = prevChip;
	cursor = next_cursor;
	prevChip = cursor->chip;
	cursor->chip = '_';
}
void TicTacToe::move(char direction){
	bool u_l = cursor->up_left && (direction == 'Q' || direction == 'q'),
	up = cursor->up && (direction == 'W' || direction == 'w'),
	u_r = cursor->up_right && (direction == 'E' || direction == 'e'),
	left = cursor->left && (direction == 'A' || direction == 'a'),
	right = cursor->right && (direction == 'D' || direction == 'd'),
	d_l = cursor->down_left && (direction == 'Z' || direction == 'z'),
	down = cursor->down && (direction == 'X' || direction == 'x'),
	d_r = cursor->down_right && (direction == 'C' || direction == 'c');

	if(u_l) moveUtil(cursor->up_left);
	else if(up) moveUtil(cursor->up);
	else if(u_r) moveUtil(cursor->up_right);
	else if(left) moveUtil(cursor->left);
	else if(right) moveUtil(cursor->right);
	else if(d_l) moveUtil(cursor->down_left);
	else if(down) moveUtil(cursor->down);
	else if(d_r) moveUtil(cursor->down_right);
}

bool TicTacToe::setNode() {
	Node *up_left, *up, *up_right, *left, *mid, *right, *down_left, *down, *down_right;

	up_left = head;
	up = up_left->right;
	up_right = up->right;
	left = up_left->down;
	mid = left->right;
	right = mid->right;
	down_left = left->down;
	down = down_left -> right;
	down_right = down->right;
	Node* node_list[] = {up_left, up, up_right, left, mid, right, down_left, down, down_right};

	cursor->chip = curPlayer == '1' ? '1' : '2';
	curPlayer = curPlayer == '1' ? '2' : '1';

	for(Node* node : node_list){
		if(node->chip != '1' && node->chip != '2'){
			cursor = node;
			cursor->chip = '_';
			break;
		}
	}
	return true;
}

bool TicTacToe::getWinnerUtil(Node *first, Node *second, Node *third) {
	return (first->chip == second->chip) &&
	(second->chip == third->chip) && (first->chip != '-');
}
Win* TicTacToe::getWinner(){
	bool win1, win2, win3, win4, win5, win6, win7, win8, win9;
	Node* u_l = head;
	Node* u = u_l->right;
	Node* u_r = u->right;
	Node* r = u_r->down;
	Node* m = r->left;
	Node* l = m->left;
	Node* d_l = l->down;
	Node* d = d_l->right;
	Node* d_r = d->right;
	win1 = getWinnerUtil(u_l, u, u_r);
	win2 = getWinnerUtil(l, m, r);
	win3 = getWinnerUtil(d_l, d, d_r);
	win4 = getWinnerUtil(u_l, l, d_l);
	win5 = getWinnerUtil(u, m, d);
	win6 = getWinnerUtil(u_r, r, d_r);
	win7 = getWinnerUtil(u_l, m, d_r);
	win8 = getWinnerUtil(u_r, m, d_l);
	if(win1 || win2 || win3 || win4 || win5 || win6 || win7 || win8){
		winner->win = true;
		winner->player = curPlayer == '1' ? '2' : '1';
	}
	return winner;
}
