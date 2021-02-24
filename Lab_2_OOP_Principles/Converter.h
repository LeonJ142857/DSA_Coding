//
// Created by user on 24/02/2021.
//

#ifndef DSA_CODING_CONVERTER_H
#define DSA_CODING_CONVERTER_H
#include <string>
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
	string dec_to_roman(const string * romans, const int * decimal_bases);
	int roman_to_dec(const string * romans, const int * decimal_bases);
};



#endif //DSA_CODING_CONVERTER_H
