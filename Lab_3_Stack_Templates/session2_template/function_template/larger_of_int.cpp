//
// Created by user on 09/03/2021.
//
#include <iostream>
using namespace std;

// your code here
int larger(int a, int b){
	return (a + b + abs(b-a))/2;
}


int main() {
	int data1, data2;
	cout << "Enter first data " << endl;
	cin >> data1;

	cout << "Enter second data " << endl;
	cin >> data2;

	cout << "The larger of " << data1 << " and " << data2 << " is " << larger(data1, data2) << endl;
}