 #include <iomanip>
    #include <iostream>
    using namespace std;
    int main()
    {
        cout << setprecision(17);
        double d = 0.1;
        cout << d << endl;
        return 0;
    }

    /*
    a) 0.11
b) 0.10000000000000001
c) 0.100001
d) compile time error
    */