//
// Created by user on 24/03/2021.
//
#include <iostream>
#include <set>
#include <string>
using namespace std;
int main(){
	set<string>animal;
	animal.insert("Dog");
	animal.insert("Dog");
	animal.insert("Zebra");
	animal.insert("Cat");
	cout << "The animals: \n";
	for(const auto & element : animal)
		cout << "- " << element << endl;
	if(animal.find("Cat") != animal.end())
		cout << "There is a cat" << endl;
	cout << "The lower bound of cat = " << *animal.lower_bound("Cat") << endl;
	cout << "The upper bound of cat = " << *animal.upper_bound("Cat") << endl;
	cout << "\nDelete cat = " << endl;
	animal.erase("Cat");
	for(const auto & element : animal)
		cout << "- " << element << endl;
}
