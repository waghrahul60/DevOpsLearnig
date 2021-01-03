#include <stdio.h> 
void func()
{
	printf("Hello");
}
void main() 
{ 
	func();
	func(2);
	func(45,4);
}