//
// Created by user on 09/03/2021.
//

#include <iostream>

#include <string>
using namespace std;

class Larger {
private:
	float first;
	float second;
public:
	Larger();
	Larger(float f, float s);
	float getFirst();
	float getSecond();
	void setFirst(float f);
	void setSecond(float s);
	float isLarger();
};
Larger::Larger(float f, float s){
	first = f; second = s;
}
float Larger::getFirst() {
	return first;
}
float Larger::getSecond() {
	return second;
}
void Larger::setFirst(float f) {
	first = f;
}
void Larger::setSecond(float s) {
	second = s;
}
float Larger::isLarger() {
	return first > second ? first : second;
}


int main() {
	Larger l;
	float f, s;
	cout << "Enter first data " << endl;
	cin >> f;
	l.setFirst(f);
	cout << "Enter second data " << endl;
	cin >> s;
	l.setSecond(s);
	cout << "The larger of " << f << " and " << s << " is " << l.isLarger() << endl;
	return 0;
}