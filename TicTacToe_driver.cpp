//
// Created by user on 22/04/2021.
//
#include <iostream>
#include "TicTacToe.cpp"
using namespace std;
int main(){
	auto ticTac = TicTacToe();
	ticTac.display();
	bool over = false;
	while(!over){
		string allowed_chars = "QWEADZXCqweadzxc:";
		char control;
		cin >> control;
		bool valid = false;
		for(char ch : allowed_chars)
			if(control == ch){
				valid = true;
				break;
			}
		if(valid){
			if(control == ':') ticTac.setNode();
			else ticTac.move(control);
		}
		system("cls");
		ticTac.display();
		over = ticTac.getWinner()->win;
	}
	cout << "The winner is player" << ticTac.getWinner()->player;
}
