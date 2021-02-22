//
// Created by user on 17/02/2021.
//
#include <iostream>
using namespace std;
int main(){
	const int ROW = 9;
	int data[ROW] = {3,49,1,6,33,13,9,4,6};
	int key;
	cout << "What data are you searching for ?" << endl;
	cin >> key;
	bool found = false;
	for (int i = 0; i < ROW; ++i){
		if (data[i] == key){
			cout << "found at index " << i << endl;
			found = true;
			break;
		}
	}
	if (!found) cout << "not found" << endl;
	return 0;
}
