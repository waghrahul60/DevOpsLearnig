#include <stdio.h> 
void func(void)
{
	printf("Hello");
}
void main() 
{ 
	func();
	//func(2);
}

/*
12. What will be the output of the following program in both C and C++?

#include<stdio.h>
int main(int argc, char const *argv[])
{
	printf("%d\n", (int)sizeof('a'));
	return 0;
}
a) Output in C is 1 and in C++ is 4
b) Output in C is 4 and in C++ is 1
c) Output in C is 1 and in C++ is 1
d) Output in C is 4 and in C++ is 4
View Answer

Answer: b
Explanation: In C a character is stored as int therefore the size of ‘a’ is printed as 4 whereas in C++ it is stored as char only therefore in C++ it prints 1.



*/