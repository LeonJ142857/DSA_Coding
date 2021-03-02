//
// Created by user on 24/02/2021.
//
#include "Converter.h"
#include <iostream>
using namespace std;

class Options{
public :
	static void main_opt(){
		cout << "What do you want to do ?\n\n1. Convert decimal to roman number"
				"\n2. Convert roman number to decimal\n3. Exit\n" << endl;
		int option; cin >> option;
		if(option == 1 || option == 2){
			if(option == 1) dec_to_r_opt(option);
			else if(option == 2) r_to_dec_opt(option);
		}
	}
private:
	static void dec_to_r_opt(int option){
		int input;
		do{
			cout << "Please input a number from 1-9999, input a number outside the range to exit" << endl; cin >> input;
			auto * converter = new Converter<typeof(input)>(input, option);
			string result = converter->dec_to_roman();
			cout << "This is the number represented using roman numbers: " << result << endl;
		} while(input >= 1 && input <= 9999);
		main_opt();
	}
	static void r_to_dec_opt(int option) {
		static int result;
		do{
			cout << "Please input a roman number from I to MMMMMMMMMCMXCIX,"
		   " input any letter not defined in roman numerals to exit" << endl;
			string input; cin >> input;
			auto * converter = new Converter<string>(input, option);
			result = converter->roman_to_dec();
			cout << "This is the number represented in decimal: " << result << endl;
		} while(result >= 1 && result <= 9999);
		main_opt();
	}
};
