//
// Created by user on 24/02/2021.
//
#include "DecRoman.h"
using namespace std;

int main(){
	cout << "Welcome to a simple program to convert a decimal number to d_to_r number and vice versa" << endl;
	cout << "made by : Karel Bondan, Leon Jayakusuma, Nathanael Jason L." << endl;
	cout << "What do you want to do ?\n1. Convert decimal to d_to_r\n2. Convert d_to_r to decimal\n3. Exit" << endl;
	int option; cin >> option;
	if(option == 1 || option == 2){
		if(option == 1) DecRoman::dec_to_r_opt(option);
		else if(option == 2) DecRoman::r_to_dec_opt(option);
	}
	return 0;
}
