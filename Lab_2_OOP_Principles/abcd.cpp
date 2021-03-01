//
// Created by user on 01/03/2021.
//
#include <iostream>
using namespace std;

int main()
{
	int number[] = {1, 4, 9, 16, 25, 36, 49};
	int * ptr = &number[2];
	cout << ptr[0] << ' ' << ptr[1] << ' ' << ptr[3];
	return 0;
}
