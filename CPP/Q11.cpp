#include<iostream>
using namespace std;
int x = 1;
int main()
{
    int x = 2;
    {
        int x = 3;
        cout << ::x << endl;
    }
    return 0;
}

/*

a) 1
b) 2
c) 3
d) 123
View Answer

Answer: a
Explanation: While printing x we are using :: operator hence the refernce is given to global variable hence the global variable x = 1 is printed.
*/