//
// Created by user on 09/03/2021.
//
//
// Created by user on 09/03/2021.
//
#include <iostream>
#include <string>
using namespace std;

// your code here
string larger(string& a, string& b){
	std::pair<string, string> p = {a, b};
	string greater_len, lower_len;
	if(a.size() > b.size()){
		greater_len = a; lower_len = b;
	}
	else{
		lower_len = a; greater_len = b;
	}
	int i;
	for(i = 0; i < lower_len.size(); ++i){
		char l = lower_len[i], g = greater_len[i];
		if(l > g) return lower_len;
		else if(g > l) return greater_len;
	}
	return greater_len;
}

int main() {
	string data1, data2;
	cout << "Enter first data " << endl;
	cin >> data1;
	cout << "Enter second data " << endl;
	cin >> data2;
	cout << "The larger of " << data1 << " and " << data2 << " is " << larger(data1, data2) << endl;
}
