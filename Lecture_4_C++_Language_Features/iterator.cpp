//
// Created by user on 10/03/2021.
//
#include <iostream>
#include <vector>
using namespace std;
int main(){
	int myNumber[] = {1,3,6,7,8,10};
	vector<int> x;
	for(auto it = begin(myNumber); it != end(myNumber); ++it)
		x.push_back(*it);
	cout << "myNumber = ";
	for(auto it = begin(x); it != end(x); ++it)
		cout << *it << " ";
}
