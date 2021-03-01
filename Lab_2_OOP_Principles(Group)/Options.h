//
// Created by user on 24/02/2021.
//
#include "Converter_Implement.h"
#include <iostream>
using namespace std;

class Options{
public :
	static void main_opt(){
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

	}
	static void r_to_dec_opt(int option) {
		cout << "Please input a Letter from I to MMMMMMMMMCMXCIX";
		string input; cin >> input;
		auto * converter = new Converter<typeof(input)>(input, option);
		int result = converter->roman_to_dec();
		cout << "This is the number represented in decimal" << result << endl;
		while(result >= 1 && result <= 9999){
			cout << "Please input a Letter from I to MMMMMMMMMCMXCIX"; cin >> input;
			converter = new Converter<typeof(input)>(input, option);
			result = converter->roman_to_dec();
			cout << "This is the number represented in decimal" << result << endl;
		}
	}
};
