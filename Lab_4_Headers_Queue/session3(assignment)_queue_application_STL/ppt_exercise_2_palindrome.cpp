//
// Created by user on 17/03/2021.
//
#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main(){
	string s; stack<char> st; queue<char> q; int i;
	cout << "Insert string:" << endl;
	cin >> s; size_t size = s.size();
	for(i = 0; i < size/2; ++i)
		st.push(s[i] >= 65 && s[i] <= 90 ? s[i]+32 : s[i]);
	i += size % 2 ? 1 : 0;
	for(i; i < size; ++i)
		q.push(s[i] >= 65 && s[i] <= 90 ? s[i]+32 : s[i]);
	char first, second;
	int j; size_t st_size = st.size();
	for(j = 0; j < st_size; ++j){
		first = st.top(); second = q.front();
		if(first == second) {
			st.pop();
			q.pop();
		}
		else{
			cout << "The string is not a palindrome" << endl;
			break;
		}
	}
	if(j == st_size) cout << "The string is a palindrome" << endl;
}
