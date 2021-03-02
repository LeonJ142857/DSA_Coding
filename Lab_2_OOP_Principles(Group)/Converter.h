//
// Created by user on 24/02/2021.
//

#ifndef DSA_CODING_CONVERTER_H
#define DSA_CODING_CONVERTER_H
#include <string>
#include <map>
#define scm_isg static const map<int, string, greater<int>>
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
	int r_to_d_check(scm_isg r_to_d_1, scm_isg r_to_d_2);
};



#endif //DSA_CODING_CONVERTER_H
