//
// Created by user on 18/03/2021.
//
#include <queue>
#include <vector>
#include <iostream>
using namespace std;
typedef pair<int, string> pis;
int main(){
	priority_queue<pair<int, string>> pq;
	pair<int, string> input; int n;
	cout << "Please input the number of students that you want to input:";
	cin >> n; cout << "Please input the student data : [Name] [GPA]" << endl;
	for(int i = 0; i < n; ++i){
		cin >> input.second >> input.first;
		pq.push(input);
	}
	cout << "The grades of the students are :" << endl;
	while(!pq.empty()){
		input = pq.top(); pq.pop();
		cout << input.second << " " << input.first << endl;
	}
}