//
// Created by user on 10/03/2021.
//
#include <iostream>
#include "header/addnumber.h"
using namespace std;

int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << a << " + " << b << " = " << addFunction(a, b) << endl;
	return 0;
}
