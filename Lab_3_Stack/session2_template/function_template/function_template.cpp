//
// Created by user on 09/03/2021.
//
//
// Created by user on 09/03/2021.
//
#include <iostream>
#include <string>
using namespace std;

// your code here
template<typename T>
T maximum(T& a, T& b){
	return (a > b ? a : b);
}
template<typename T>
T minimum(T& a, T& b){
	return (a < b ? a : b);
}

int main() {
	int a1 = 3, a2 = 7;
	cout << "Calling functions with two ints, ";
	cout << a1 << " and " << a2 << "...\n";
	cout << "The lesser of the two is: " << minimum(a1, a2) << endl;
	cout << "The greater of the two is: " << maximum(a1, a2) << endl;

	//call function with two chars
	char b1 = 'C', b2 = 'Z';
	cout << "\nCalling functions with two chars, '";
	cout << b1 << "' and '" << b2 << "'...\n";
	cout << "The lesser of the two is: " << minimum(b1, b2) << endl;
	cout << "The greater of the two is: " << maximum(b1, b2) << endl;

	//call function with two doubles
	double c1 = 6.14, c2 = 3.28;
	cout << "\nCalling functions with two doubles, ";
	cout << c1 << " and " << c2 << "...\n";
	cout << "The lesser of the two is: " << minimum(c1, c2) << endl;
	cout << "The greater of the two is: " << maximum(c1, c2) << endl;

	//call function with two strings
	string s1 = "ABZ", s2 = "ABC";
	cout << "\nCalling functions with two strings, ";
	cout << s1 << " and " << s2 << "...\n";
	cout << "The lesser of the two is: " << minimum(s1, s2) << endl;
	cout << "The greater of the two is: " << maximum(s1, s2) << endl;
}
