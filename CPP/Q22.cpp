
/*
#include <iostream>
using namespace std;
class Point
{
    int x, y;
  public:
   Point(int i = 0, int j =0)
   { x = i; y = j;  }
   int getX() const { return x; }
   int getY() {return y;}
};
 
int main()
{
    const Point t;
    cout << t.getX() << " ";
    cout << t.getY();
    return 0;
}

a) 0 0
b) Garbage values
c) Compile erroe
d) Segmentation fault
View Answer

Answer: c
Explanation: C++ does not allows a constant object to access any non constant member functions and as getY() is a non constant function and t is a constant object therefore the program gives the error.
*/