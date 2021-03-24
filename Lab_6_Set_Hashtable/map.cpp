//
// Created by user on 24/03/2021.
//
#include <iostream>
#include <map>
#include <iterator>
using namespace std;
int main(){
	map<int, int> age1;
	age1.insert(pair<int, int>(1, 30));
	age1.insert(pair<int, int>(2, 19));
	age1.insert(pair<int, int>(3, 60));
	age1.insert(pair<int, int>(4, 19));
	map<int, int>::iterator itr;
	cout << "\nThe map age1 is : \n";
	cout << "KEY & ELEMENT\n";
	for(itr = age1.begin(); itr != age1.end(); ++itr){
		cout << itr->first << "= " << itr ->second << "\n";
	}
	cout << endl;
	map<int, int> age2(age1.begin(), age1.end());
	cout << "\nThe map age2 is : \n";
	cout << "KEY & ELEMENT\n";
	for(itr = age2.begin(); itr != age2.end(); ++itr){
		cout << itr->first << "= " << itr ->second << "\n";
	}
	cout << endl;
	int num = age2.erase(4);
	cout << "The number removed is " << num << endl;
	cout << "\nThe map age2 is : \n";
	cout << "KEY & ELEMENT\n";
	for(itr = age2.begin(); itr != age2.end(); ++itr){
		cout << itr->first << "= " << itr ->second << "\n";
	}
	cout << "age1.lower_bound(2) : KEY =" << age1.lower_bound(2)->first;
	cout << "ELEMENT = " << age1.lower_bound(2)->second << "\n\n";
	cout << "age2.lower_bound(2) : KEY =" << age2.lower_bound(2)->first;
	cout << "ELEMENT = " << age2.lower_bound(2)->second << "\n\n";
}
