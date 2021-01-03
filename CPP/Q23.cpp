//What will be the output of the following C++ code?

// #include <stdio.h>
// int main()
// {
//    const int x;
//    x = 10;
//    printf("%d", x);
//    return 0;
// }

/*
a) 10
b) Garbage value
c) Error
d) Segmentation fault
View Answer

Answer: c
Explanation: In C++, all the constant variables must be initialized while declaration and they cannot be modified later in the program. Now in this program as we have declared the constant variable x in first line and initializing it in the next line therefore the program gives the error.
*/