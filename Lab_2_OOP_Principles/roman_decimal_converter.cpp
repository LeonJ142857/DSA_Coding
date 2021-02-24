//
// Created by user on 24/02/2021.
//
#include "DecRoman.h"
using namespace std;

int main(){
	cout << "Welcome to a simple program to convert a decimal number to romans number and vice versa" << endl;
	cout << "made by : Karel Bondan, Leon Jayakusuma, Nathanael Jason L." << endl;
	cout << "What do you want to do ?\n1. Convert decimal to romans\n2. Convert romans to decimal\n3. Exit" << endl;
	int option; cin >> option;
	const string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	const int decimal_bases[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	if(option == 1 || option == 2){
		if(option == 1) DecRoman::dec_to_r_opt(option, romans, decimal_bases);
		else if(option == 2) DecRoman::r_to_dec_opt(option, romans, decimal_bases);
	}
	return 0;
}

/*
int dec_numbers(char rom){
	for (int i = 0; i <= input.length(); ++i){
		for (auto it = m1.begin(); it != m1.end(); ++it){
			if (input[i]+1 == it->first){
				result = result + it->second;
			}
			else if (input[i] == it->first){
				result = result + it->second;
			}
			else {
				return 0;
			}
		}
	}
}
}
*/