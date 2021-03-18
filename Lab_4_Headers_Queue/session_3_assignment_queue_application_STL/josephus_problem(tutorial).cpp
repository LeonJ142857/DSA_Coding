//
// Created by user on 17/03/2021.
//
#include<iostream>
#include "../session_2_queue/queue_linked_circular/QueueLinkedCircular.h"
using namespace std;

int main() {
	QueueLinkedCircular e;
	int n, m, i;

	cout << "Enter the number of players: ";
	cin >> n;
	cout << "Enter the value of k (every kth player gets eliminated), i.e the number of passes: ";
	cin >> m;
	for (i = 1; i <= n; ++i){
		e.enqueue(i);
	}
	e.display(); int d;
	cout << "Eliminated in order \n";
	while(n > 1){
		for(i = 1; i <= m; ++i){
			e.move_next();
		}
		d = e.dequeue();
		cout << d << endl;
		--n;
	}
	d = e.dequeue();
	cout << "The winning player is :" << d << endl;
	return 0;
}

