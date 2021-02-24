//
// Created by user on 24/02/2021.
//

#include "Converter.h"
#include <map>
template<typename T>
string Converter<T>::dec_to_roman(const string * romans, const int * decimal_bases) {
	string result;
	while(input){
		for(int i = 0; i < SIZE; ++i){
			int d_base = decimal_bases[i];
			string roman = romans[i];
			if(input > d_base){
				input -= d_base;
				result += roman;
			}
		}
	}
	return result;
}
template<typename T>
int Converter<T>::roman_to_dec(const string * romans, const int * decimal_bases) {
	string result;
	map<string, int> m1 = {
			{"M",  1000}, {"CM", 900}, {"D",  500}, {"CD", 400},
			{"C",  100}, {"XC", 90}, {"L",  50}, {"XL", 40},
			{"X",  10}, {"IX", 9}, {"V",  5}, {"IV", 4}, {"I",  1}
	};
}

