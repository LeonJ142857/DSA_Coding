#include <iostream>
using namespace std;

namespace {
   const int i = 7;
   int myNumber;
   void funct (int);
}

namespace {
   void funct (int a) { cout << a << endl; }
}

int main()
{
   funct(5);
   myNumber = 90;
   cout << i << endl;
   cout << myNumber << endl;
   return 0;
}
