#include <iostream>

using namespace std;
int main(){
    int a=20;
    int &n=a;
    n=a++;
    a=n++;
    cout<<a<<"\t"<<n<<endl;
    return 0;
}

