// What will be the output of the following C++ code?

#include <iostream>
using namespace std;
class Test
{
    static int x;
  public:
    Test() 
    { 
        x++; 
    }
    static int getX() 
    {
        return x;
    }
};
int Test::x = 0;
int main()
{
    cout << Test::getX() << " ";
    Test t[5];
    cout << Test::getX();
}

/*
a) 0 0
b) 5 0
c) 0 5
d) 5 5
View Answer

Answer: c
Explanation: Static function can be called without using objects therefore the first call is fine. Next when we are creating 5 objects of the class then value of x is updated each time and as static variables are global to class therefore each updation of x is reflected back to each object hence value of x is 5.
*/