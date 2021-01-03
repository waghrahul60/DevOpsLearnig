#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
   int a =10;
    int const &b=a;
    a=11;
    printf("%d%d",a,b);
}

