
/*
#include <iostream>
class Test
{
   public:
     void fun();
};
static void Test::fun()   
{
    std::cout<<"fun() is static";
}
int main()
{
    Test::fun();   
    return 0;
}


a) fun() is static
b) Compile-time Error
c) Run-time Error
d) Nothing is printed
View Answer

Answer: b
Explanation: The prototype of the functions are not matched. The function declared inside a class does not have static linkage however the class defined outside the class has the static linkage, therefore, the program gives an error.
*/