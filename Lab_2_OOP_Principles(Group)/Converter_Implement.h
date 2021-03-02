//
// Created by user on 24/02/2021.
//

#include "Converter.h"
#include <map>
#include <regex>
template<typename T>
#define scm_isg static const map<int, string, greater<int>>
string Converter<T>::dec_to_roman() {
	scm_isg d_to_r =
			{{1000, "M"}, {900,"CM"}, {500, "D"},{400, "CD"},
			 {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
			 {10, "X"}, {9,"IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
			};
	string result;
	while(input){
		for(auto i : d_to_r){
			int d_base = i.first;
			string roman = i.second;
			if(input >= d_base){
				input -= d_base;
				result += roman;
			}
		}
	}
	return result;
}
template<typename T>
int Converter<T>::roman_to_dec() {
	scm_isg r_to_d_2 =
			{{900, "CM"},{400, "CD"}, {90, "XC"},
			 {40, "XL"}, {9, "IX"}, {4, "IV"}
			};
	scm_isg r_to_d_1 =
			{{1000, "M"}, {500, "D"}, {100, "C"},
			 {50, "L"}, {10, "X"}, {5, "V"}, {1, "I"}
			};
	int result = 0; string inp = input;
	int i = 0;
	const int size = inp.size();
	bool match = regex_match(inp, regex("^M{0,3}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$"));
	if(match){
		while(i < size){
			bool detected = false;
			for(const auto& j : r_to_d_2){
				if(i <= size-2){
					string sub = inp.substr(i, i+2);
					if(sub == j.second){
						result += j.first;
						i += 2;
						detected = true;
						break;
					}
				}
			}
			if(!detected){
				for(const auto& j : r_to_d_1){
					if(i < size){
						string sub = inp.substr(i, i+1);
						if(sub == j.second){
							result += j.first;
							++i;
							break;
						}
					}
				}
			}
		}
	}
	return result;
}
template<typename T>
int Converter<T>::r_to_d_check(scm_isg r_to_d_1, scm_isg r_to_d_2)
{
	while(i < size){
		bool detected = false;
		for(const auto& j : r_to_d_2){
			if(i <= size-2){
				string sub = inp.substr(i, i+2);
				if(sub == j.second){
					result += j.first;
					i += 2;
					detected = true;
					break;
				}
			}
		}
		if(!detected){
			for(const auto& j : r_to_d_1){
				if(i < size){
					string sub = inp.substr(i, i+1);
					if(sub == j.second){
						result += j.first;
						++i;
						break;
					}
				}
			}
		}
	}

}


