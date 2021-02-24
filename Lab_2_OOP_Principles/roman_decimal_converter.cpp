//
// Created by user on 24/02/2021.
//
#include <iostream>
#include <string>
#include <map>
using namespace std;

template<typename T>
class Converter{
private:
	const int SIZE = 13;
	int option;
	T input;
public:
	Converter(T input, int option = 1){
		this->input = input;
		this->option = option;
	}
	string dec_to_roman(const string (&romans)[], const int (&decimal_bases)[]);
	int roman_to_dec(const string (&romans)[], const int (&decimal_bases)[]);
};

template<typename T>
string Converter<T>::dec_to_roman(const string (&romans)[], const int (&decimal_bases)[]) {
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
int Converter<T>::roman_to_dec(const string (&romans)[], const int (&decimal_bases)[]){
	string result;
	map<string, int> m1 = {
      {"M", 1000},
      {"CM", 900},
      {"D", 500},
      {"CD", 400},
      {"C", 100},
	  {"XC", 90},
      {"L", 50},
      {"XL", 40},
      {"X", 10},
      {"IX", 9},
	  {"V", 5},
      {"IV", 4},
      {"I", 1}
   };
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


int main(){
	cout << "Welcome to a simple program to convert a decimal number to roman number and vice versa" << endl;
	cout << "made by : Karel Bondan, Leon Jayakusuma, Nathanael Jason L." << endl;
	cout << "What do you want to do ?\n1. Convert decimal to roman\n2. Convert roman to decimal\n3. Exit" << endl;
	int option; cin >> option;
	string roman[] = {"M", "CM", "D", "CD", "C", "XC", r
				   "L", "XL", "X", "IX", "V", "IV", "I"};
	int decimal_bases[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	if(option >=1 && option <= 3){
		if(option == 1){
			cout << "Please input a number from 1-9999";
			int input; cin >> input;
			auto converter = Converter<typeof(input)>(input, option);
		}

		else if(option == 2){
			cout << "Please input a Letter from I to MMMMMMMMM";
			int input2; cin >> input2;

			auto converter = Converter<typeof(input2)>(input2, option);
		}

		else (option == 3){
			return 0;
		}
	}

}

