//
// Created by user on 24/02/2021.
//

#include <iostream>
#include <cmath>
#define SIZE(x) sizeof(x)*8
using namespace std;

void printSignedRange(int count){
	int min = pow(2, count-1);
	int max = pow(2, count-1) - 1;
	printf("%d to %d\n", -min, max);
}
void printUnsignedRange(int count){
	unsigned int max = pow(2, count)-1;
	cout << 0 << " to " << max << endl;
}
int main(){
	cout << "Size of int = " << SIZE(int) << "bits = " << sizeof(int) << "bytes" << endl;
	cout << "Size of unsigned int = " << SIZE(unsigned int) << "bits = " << sizeof(unsigned int) << "bytes" << endl;
	printSignedRange(SIZE(int));
	printUnsignedRange(SIZE(unsigned int));
}

