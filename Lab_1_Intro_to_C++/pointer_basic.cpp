//
// Created by user on 17/02/2021.
//
#include <iostream>
using namespace std;

int main(){
	int x = 99;
	cout << "The content of x is " << x << endl;
	cout << "The address of x is " << &x << endl;

	// your code here
	int * p = &x;
	cout << "The value of the pointer p is " << p << endl;
	cout << "The value p is pointing to is " << *p << endl;
	*p = 115;
	cout << "The value of the pointer p is " << p << endl;
	cout << "The value p is pointing to is " << *p << endl;
	int *q = new(int);
	*q = 333;
	cout << q << endl << &q << endl << *q;
}


