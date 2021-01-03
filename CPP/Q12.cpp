/*

#include<iostream>
using namespace std;
class A
{
  ~A(){
    cout<<"Destructor called\n";
    }
};
int main()
{
    A a;
    return 0;
}

a) Destructor called
b) Nothing will be printed
c) Error
d) Segmentation fault

Answer: c
Explanation: Whenever a destructor is private then one should not define any normal object as it will be destroyed at the end of the program which will call destructor and as destructor is private the program gives error during compile while in case of pointer object the compiler at compile does not know about the object, therefore, does not gives compile error. Hence when the destructor is private then the programmer can declare pointer object but cannot declare a normal object.
*/