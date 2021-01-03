#include <iostream>
using namespace std;
class A
{
   private:
     int x;
   public:
     A(int _x)  
     {  
         x = _x; 
    }
     int get()  
     { 
         return x; 
    }
};
class B
{
    static A a;
  public:
   static int get()
    {  
       return a.get(); 
    }
}; 
int main(void)
{
    B b;
    cout << b.get();
    return 0;
}

/*
a) Garbage value
b) Compile-time Error
c) Run-time Error
d) Nothing is printed
View Answer

Answer: b
Explanation: Every static member function of a class must be initialized explicitly before use and a data member, a of class A declared inside class B is used without initializing ‘a’ therefore the program gives an error.
*/