#include<iostream>
using namespace std;
int main ()
{
   int cin;
   cin >> cin;
   cout << "cin: " << cin;
   return 0;
}

/*
a) cin: garbage value
b) Error
c) Segmentation fault
d) Nothing is printed
View Answer

Answer: a
Explanation: cin is a variable hence overrides the cin object. cin >> cin has no meaning so no error.

*/