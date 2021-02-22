#include <iostream>
#include <string>
using namespace std;
int main() {
	string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
	cout << "What day is today? (Monday, Tuesday, ..., Sunday)" << endl;
	string today;
	cin >> today;
	for (int i = 0; i < 7; ++i){
		if(days[i] == today && i <= 4) cout << "I'm studying";
		else if(days[i] == today && i >=5 && i <=6) cout << "I'm fishing";
	}
	return 0;
}
