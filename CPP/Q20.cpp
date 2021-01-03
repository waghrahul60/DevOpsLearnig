#include<iostream>
using namespace std;
class Test
{
   private:
     static int count;
   public:
     Test& fun(); 
};
int Test::count = 0;
Test& Test::fun()
{
    Test::count++;
    cout << Test::count << " ";
    return *this;
}
int main()
{
    Test t;
    t.fun().fun().fun().fun();
    return 0;
}

/*
a) 4 4 4 4
b) 1 2 3 4
c) 1 1 1 1
d) 0 1 2 3
View Answer

Answer: b
Explanation: Here we are returning the reference of object by the function call fun() therefore this type of call is allowed. Also as count is static member of the class therefore updation is reflected to the whole class and to every object of the class. Therefore the four function calls to fun() function updates the value of count and prints.

*/