//
// Created by user on 17/02/2021.
//
#include <iostream>
using namespace std;

void swap(int a, int b);
void swap2(int * a, int * b);
void swap3(int & a, int & b);

int main(){
	int a, b;

	cout << "Enter first number " << endl;
	cin >> a;

	cout << "Enter second number " << endl;
	cin >> b;

	// print before swap
	cout << "BEFORE SWAP: First number is " << a << " and the Second number is " << b << endl;

	// try to swap
	swap2(&a, &b);

	// print before swap
	cout << endl << "AFTER SWAP: First number is " << a << " and the Second number is " << b << endl;

}

void swap(int a, int b) {
	// your code here
	int temp = b;
	b = a;
	a = temp;
}

void swap2(int * a, int * b) {
	// your code here
	int * temp = new(int);
	*temp = *b;
	*b = *a;
	*a = *temp;
}

void swap3(int & a, int & b) {
	// your code here
	int temp = b;
	b = a;
	a = temp;
}
