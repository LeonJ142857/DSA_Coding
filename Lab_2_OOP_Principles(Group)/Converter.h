//
// Created by user on 24/02/2021.
//

#ifndef DSA_CODING_CONVERTER_H
#define DSA_CODING_CONVERTER_H
#include <string>
#include <map>
#include <regex>
#define m_isg map<int, string, greater<int>>
#define scm_isg static const m_isg
#define m_isg map<int, string, greater<int>>
#define scm_isg static const m_isg
using namespace std;

template<typename T>
class Converter{
private:
	const int SIZE = 13;
	int option;
	T input;
	void check_for_2(int& i, const int& size, int& result, bool& detected);
	void check_for_1(int& i, const int& size, int& result, bool& detected);
	scm_isg r_to_d_2;
	scm_isg r_to_d_1;
public:
	explicit Converter(T input, int option = 1){
		this->input = input;
		this->option = option;
	}
	string dec_to_roman();
	int roman_to_dec();
	int r_to_d_check();
};


template<typename T>
const m_isg Converter<T>::r_to_d_2 =
		{{900, "CM"},{400, "CD"}, {90, "XC"},
		 {40, "XL"}, {9, "IX"}, {4, "IV"}
		};
template<typename T>
const m_isg Converter<T>::r_to_d_1 =
		{{1000, "M"}, {500, "D"}, {100, "C"},
		 {50, "L"}, {10, "X"}, {5, "V"}, {1, "I"}
		};
template<typename T>
string Converter<T>::dec_to_roman() {
	scm_isg d_to_r =
			{{1000, "M"}, {900,"CM"}, {500, "D"},{400, "CD"},
			 {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
			 {10, "X"}, {9,"IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
			};
	string result;
	while(input >= 1 && input <= 9999){
		for(auto &i : d_to_r){
			int d_base = i.first;
			string roman = i.second;
			if(input >= d_base){
				input -= d_base;
				result += roman;
				break;
			}
		}
	}
	return result;
}
template<typename T>
int Converter<T>::roman_to_dec() {
	bool match = regex_match(input, regex("^M{0,9}(CM|CD|D?C{0,3})(XC|XL|L?X{0,3})(IX|IV|V?I{0,3})$"));
	int result = -1;
	if(match) result = r_to_d_check();
	return result;
}

template<typename T>
int Converter<T>::r_to_d_check()
{
	int result = 0, i = 0;
	const int size = input.size();
	while(i < size){
		bool detected = false;
		check_for_2(i, size, result, detected);
		check_for_1(i, size, result, detected);
	}
	return result;
}

template<typename T>
void Converter<T>::check_for_2(int& i, const int& size, int& result, bool& detected){
	for(const auto& j : r_to_d_2){
		if(i <= size-2){
			string sub = input.substr(i, 2);
			if(sub == j.second){
				result += j.first;
				i += 2;
				detected = true;
				break;
			}
		}
	}
}
template<typename T>
void Converter<T>::check_for_1(int& i, const int& size, int& result, bool& detected){
	if(!detected){
		for(const auto& j : r_to_d_1){
			if(i < size){
				string sub = input.substr(i, 1);
				if(sub == j.second){
					result += j.first;
					++i;
					break;
				}
			}
		}
	}
}



#endif //DSA_CODING_CONVERTER_H
