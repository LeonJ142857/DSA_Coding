//
// Created by user on 24/02/2021.
//
#include "Options.h"
using namespace std;

int main(){
	cout << "Welcome to a simple program to convert a decimal number to roman number and vice versa" << endl;
	cout << "made by : Karel Bondan, Leon Jayakusuma, Nathanael Jason L.\n" << endl;
	cout << "What do you want to do ?\n\n1. Convert decimal to roman number"
		 "\n2. Convert roman number to decimal\n3. Exit\n" << endl;
	Options::main_opt();
	return 0;
}
