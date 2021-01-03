
#include <iostream>

using namespace std;
int main(){
   int a=20 ,b=100;
int &n=a;
n=a++;
//n=&b;
cout<<a<<"\t"<<n<<endl;
    return 0;
}

