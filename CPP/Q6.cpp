

#include <iostream>
using namespace std;
 
 
int main()
{
    int *ptr = NULL;
    delete ptr;
}

/*

a) The program compiled successfully but throws an error during run-time
b) The program gives a compile-time error
c) The program is not semantically correct
d) The program is compiled and executed successfully
View Answer

Answer: d
Explanation: The above statement is syntactically and semantically correct as C++ allows the programmer to delete a NULL pointer, therefore, the program is compiled and executed successfully.

*/