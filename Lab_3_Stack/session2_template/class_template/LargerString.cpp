//
// Created by user on 09/03/2021.
//

#include <iostream>
#include <string>
using namespace std;

class Larger {
private:
	string first;
	string second;
public:
	Larger();
	Larger(string f, string s);
	string getFirst();
	string getSecond();
	void setFirst(string f);
	void setSecond(string s);
	string isLarger();
};
Larger::Larger(string f, string s){
	first = f; second = s;
}
string Larger::getFirst() {
	return first;
}
string Larger::getSecond() {
	return second;
}
void Larger::setFirst(string f) {
	first = f;
}
void Larger::setSecond(string s) {
	second = s;
}
string Larger::isLarger() {
	return first > second ? first : second;
}


int main() {
	Larger l;
	string f, s;
	cout << "Enter first data " << endl;
	cin >> f;
	l.setFirst(f);
	cout << "Enter second data " << endl;
	cin >> s;
	l.setSecond(s);
	cout << "The larger of " << f << " and " << s << " is " << l.isLarger() << endl;
	return 0;
}