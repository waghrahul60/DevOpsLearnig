#include<iostream>
using namespace std;
int x[100];
int main()
{
    cout << x[99] << endl;
}

/*
a) Garbage value
b) 0
c) 99
d) Error
View Answer

Answer: b
Explanation: In C++ all the uninitialized variables are set to 0 therefore the value of all elements of the array is set to 0.
*/