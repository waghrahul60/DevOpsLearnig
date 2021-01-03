#include <iostream>

using namespace std;

void fun(int *ptr2)
{
*ptr2=30;
}

int main(){
  int num=10;
    int *ptr1=&num;
    fun(ptr1);
    cout<<num<<endl;
    return 0;
}

