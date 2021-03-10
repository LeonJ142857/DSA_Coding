//
// Created by user on 10/03/2021.
//
#include <iostream>
using namespace std;

class C{
public:
	static  int myNumber;
};

int C::myNumber = 3;

int main(){
	int C = 9;
	cout << C << endl;
	cout << C::myNumber
}