//
// Created by user on 24/02/2021.
//

#include "Converter.h"
#include <map>
template<typename T>
#define scm static const map
string Converter<T>::dec_to_roman() {
	scm<int, string> d_to_r =
			{{1000, "M"}, {900,"CM"}, {500, "D"},{400, "CD"},
			 {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
			 {10, "X"}, {9,"IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
			};
	string result;
	while(input){
		for(auto i : d_to_r){
			int d_base = i.first;
			string roman = i.second;
			if(input > d_base){
				input -= d_base;
				result += roman;
			}
		}
	}
	return result;
}
template<typename T>
int Converter<T>::roman_to_dec() {
	int result = 0; string inp = input;
	scm<string, int> r_to_d_2 =
			{{"CM", 900},{"CD", 400}, {"XC",90},
			 {"XL", 40}, {"IX",9}, {"IV", 4}
			};
	scm<string, int> r_to_d_1 =
			{{"M", 1000}, {"D", 500}, {"C", 100},
			 {"L", 50}, {"X", 10}, {"V", 5}, {"I", 1}
			};
	int i = 0;
	const int size = inp.size();
	while(i < size){
		bool detected = false;
		for(const auto& j : r_to_d_2){
			if(i < size-2){
				if(inp.substr(i, i+2) == j.first){
					result += j.second;
					i += 2;
					detected = true;
					break;
				}
			}
		}
		if(!detected){
			for(const auto& j : r_to_d_1){
				if(i < size){
					if(inp.substr(i, i+1) == j.first){
						result += j.second;
						++i;
						break;
					}
				}
			}
		}
	}
	return result;
}


