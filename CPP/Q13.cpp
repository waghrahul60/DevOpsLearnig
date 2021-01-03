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
    A *a1 = new A();
    A *a2 = new A();
    return 0;
}
/*

a) Destructor called
b)

Destructor called
Destructor called
c) Error
d) Nothing is printed
View Answer

Answer: d
Explanation: The pointer object is created is not deleted hence the destructor for these objects is not called hence nothing is printed on the screen.

*/