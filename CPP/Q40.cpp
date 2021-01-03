#include <iostream>

using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
int x,*ptr1=arr,*ptr2=&arr[3];
x=ptr2-ptr1;
cout<<x<<endl;
    return 0;
}

