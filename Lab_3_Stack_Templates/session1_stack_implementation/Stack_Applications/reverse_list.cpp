//
// Created by user on 04/03/2021.
//

#include <iostream>
#include <string>
#include "../stackArray.h"
#include <regex>
using namespace std;

int main(){
	auto * stack = new stackArray();
	cout << "Please input a list of numbers separated by newlines, input a letter to stop input" << endl;
	regex re = regex("[0-9]+");
	string input;
	while(cin >> input && regex_match(input, re)){
		int true_number = stoi(input);
		stack->push(true_number);
	}
	cout << "The reversed list's content is ";
	while(!stack->isEmpty()){
		int top = stack->peek();
		cout << top << ", ";
		stack->pop();
	}
}
