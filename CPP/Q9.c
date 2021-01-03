

// What happens if the following program is executed in C and C++?

#include <stdio.h> 
int main(void) 
{ 
	const int j = 20; 
	int *ptr = &j;
	printf("*ptr: %d\n", *ptr); 
	return 0; 
}
/*
a) Error in both C and C++
b) Warning in both C and C++
c) Error in C but Warning in C++
d) Error in C++ but Warning in C
View Answer

Answer: d
Explanation: C++ is strict on the use of types of variables hence when the programmer tries to assign const int to a normal pointer the program gives error whereas C is not strict on types therefore it gives warning only.
*/