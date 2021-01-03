

#include <iostream>
using namespace std;
 
 
int main()
{
    int *ptr = new int;
    delete ptr;
    delete ptr;
}



/* What happens if a pointer is deleted twice in a program as shown in the following C++ statements?

int *ptr = new int;
delete ptr;
delete ptr;
a) Undefined behaviour
b) Syntactically incorrect
c) Semantically incorrect
d) The program runs perfectly


Deleting a pointer twice in a program may lead to run-time error or may run perfectly. It depends on the compiler how it handles the situation so the program may compile and run successfully but actually the program should give a run-time error(segmentation fault) as you are trying to access the unauthorized memory of the system.

*/
