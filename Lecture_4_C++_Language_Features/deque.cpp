//
// Created by user on 10/03/2021.
//
#include <iostream>
#include <deque>
using namespace std;
int main(){
	deque<int> myDeque;
	int n;
	cout << "Enter a number[1..10] = ";
	cin >> n;
	for(int i = 0; i < n; ++i) myDeque.push_back(i);
	cout << "myDeque = ";
	deque<int>::iterator it = myDeque.begin();
	while(it != myDeque.end()){
		cout << " " << *it++;
	}
}
