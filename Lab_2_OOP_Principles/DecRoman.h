//
// Created by user on 24/02/2021.
//
#include "Converter_Implement.h"
#include <iostream>
using namespace std;

class DecToRomanOption{
	static void dec_to_r_opt(int option, const string * romans, const int * decimal_bases){
		cout << "Please input a number from 1-9999, input a number outside of the range to quit" << endl;
		int input; cin >> input;
		while(input >= 1 && input <= 9999){
			cout << "Please input a number from 1-9999" << endl; cin >> input;
			auto * converter = new Converter<typeof(input)>(input, option);
			string result = converter->dec_to_roman(romans, decimal_bases);
			cout << "This is the number represented using roman numbers" << result << endl;
		}
	}
	static void r_to_dec_opt(int option, const string * romans, const int * decimal_bases) {
		cout << "Please input a Letter from I to MMMMMMMMMCMXCIX";
		string input; cin >> input;
		auto * converter = new Converter<typeof(input)>(input, option);
		int result = converter->roman_to_dec(romans, decimal_bases);
		cout << "This is the number represented in decimal" << result << endl;
		while(result >= 1 && result <= 9999){
			cout << "Please input a Letter from I to MMMMMMMMMCMXCIX"; cin >> input;
			converter = new Converter<typeof(input)>(input, option);
			result = converter->roman_to_dec(romans, decimal_bases);
			cout << "This is the number represented in decimal" << result << endl;
		}
	}
};
