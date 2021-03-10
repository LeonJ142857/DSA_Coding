//
// Created by user on 09/03/2021.
//

#include <iostream>
#include <string>
using namespace std;

template <class T>
class Larger {
private:
	T first;
	T second;

public:
	Larger();
	Larger(T& f, T& s){
		first = f; second = s;
	}
	T getFirst(){
		return first;
	}
	T getSecond(){
		return second;
	}
	void setFirst(T f){
		first = f;
	}
	void setSecond(T s){
		second = s;
	}
	T isLarger(){
		return first > second ? first : second;
	}
};


// your code here


int main() {
	Larger<int> l;
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
