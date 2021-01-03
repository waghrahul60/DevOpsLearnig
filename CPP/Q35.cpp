#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
   int a,*pa,&ra = a;
    pa=&a;
    //ra=a;
    cout<<"a= "<<a<<"pa= "<<pa<<"ra= "<<ra;
}

