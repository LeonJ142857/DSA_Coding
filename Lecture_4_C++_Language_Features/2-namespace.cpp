#include <iostream>
using namespace std;
 
// Variable created inside namespace
namespace hiho
{
    int myNumber = 300;
    const double z = 1;
    double value() {  return 2*z; }
}
 
// Global variable
int myNumber = 10;
 
int main()
{
    // Local variable
    int myNumber = 80;
 
    cout << hiho::myNumber << '\n';
    cout << hiho::value() << '\n';
    cout << ::myNumber << '\n';
    cout << myNumber << '\n';
 
    return 0;
}
