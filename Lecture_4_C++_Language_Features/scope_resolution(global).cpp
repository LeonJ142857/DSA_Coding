//
// Created by user on 10/03/2021.
//

#include <iostream>
using namespace std;

int myNumber = 1;
int main(){
	int myNumber = 2;
	cout << myNumber << endl;
	cout << ::myNumber << endl;
	::myNumber = 5;
	myNumber = 10;
	cout << myNumber << endl;
	cout << ::myNumber << endl;
	return 0;

}