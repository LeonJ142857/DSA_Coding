//
// Created by user on 09/03/2021.
//

#include <iostream>
#include <string>
using namespace std;

class Larger {
private:
	char first;
	char second;
public:
	Larger();
	Larger(char f, char s);
	char getFirst();
	char getSecond();
	void setFirst(char f);
	void setSecond(char s);
	char isLarger();
};
Larger::Larger(char f, char s){
	first = f; second = s;
}
char Larger::getFirst() {
	return first;
}
char Larger::getSecond() {
	return second;
}
void Larger::setFirst(char f) {
	first = f;
}
void Larger::setSecond(char s) {
	second = s;
}
char Larger::isLarger() {
	return first > second ? first : second;
}


int main() {
	Larger l;
	char f, s;
	cout << "Enter first data " << endl;
	cin >> f;
	l.setFirst(f);
	cout << "Enter second data " << endl;
	cin >> s;
	l.setSecond(s);
	cout << "The larger of " << f << " and " << s << " is " << l.isLarger() << endl;
	return 0;
}