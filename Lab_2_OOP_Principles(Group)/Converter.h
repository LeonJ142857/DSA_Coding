//
// Created by user on 24/02/2021.
//

#ifndef DSA_CODING_CONVERTER_H
#define DSA_CODING_CONVERTER_H
#include <string>
#include <map>
using namespace std;

template<typename T>
class Converter{
private:
	const int SIZE = 13;
	int option;
	T input;
	pair<bool, int> check_for_2();
	int check_for_1();
public:
	explicit Converter(T input, int option = 1){
		this->input = input;
		this->option = option;
	}
	string dec_to_roman();
	int roman_to_dec();
};



#endif //DSA_CODING_CONVERTER_H
