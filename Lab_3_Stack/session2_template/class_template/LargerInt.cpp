//
// Created by user on 09/03/2021.
//

#include <iostream>
#include <string>
using namespace std;

class Larger {
private:
	int first;
	int second;
public:
	Larger();
	Larger(int f, int s);
	int getFirst();
	int getSecond();
	void setFirst(int f);
	void setSecond(int s);
	int isLarger();
};
Larger::Larger(int f, int s){
	first = f; second = s;
}
int Larger::getFirst() {
	return first;
}
int Larger::getSecond() {
	return second;
}
void Larger::setFirst(int f) {
	first = f;
}
void Larger::setSecond(int s) {
	second = s;
}
int Larger::isLarger() {
	return first > second ? first : second;
}


int main() {
	Larger l;
	int f, s;
	cout << "Enter first data " << endl;
	cin >> f;
	l.setFirst(f);
	cout << "Enter second data " << endl;
	cin >> s;
	l.setSecond(s);
	cout << "The larger of " << f << " and " << s << " is " << l.isLarger() << endl;
	return 0;
}