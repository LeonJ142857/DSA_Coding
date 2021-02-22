//
// Created by user on 17/02/2021.
//
#include <iostream>
using namespace std;

// declare function prototype
template <class T>
T add (T a, T b){
	return a + b;
}

template <class T>
T subtract(T a, T b){
	return a - b;
}
template <class T>
T multiply(T a, T b){
	return a * b;
}
template <class T>
T divide(T a, T b){
	return a / b;
}


// the main function
int main(){
	//declare variables
	double num1;
	double num2;
	int option;
	double result;

	// prompt for input
	cout << "Enter the first number " << endl;
	cin >> num1;

	cout << "Enter the second number " << endl;
	cin >> num2;

	cout << "What calculation you want to do?" << endl;
	cout << "Choose the following option:" << endl;
	cout << "choose 1: addition" << endl;
	cout << "choose 2: subtraction" << endl;
	cout << "choose 3: multiplication" << endl;
	cout << "choose 4: division" << endl;
	cin >> option;
	switch(option){
		case 1:
			result = add(num1, num2);
			break;
		case 2:
			result = subtract(num1, num2);
			break;
		case 3:
			result = multiply(num1, num2);
			break;
		case 4:
			result = divide(num1, num2);
			break;
		default:
			result = INT32_MAX;
	}
	cout << "The result is " << result << endl;
}


