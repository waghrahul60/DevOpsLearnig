 #include <iostream>
using namespace std;
    int main()
    {
        float i = 123.0f;
        cout << i << endl;
        return 0;
    }

    /*
a) 123.00
b) 1.23
c) 123
d) compile time error

The value 123 is printed because of its precision.
    */