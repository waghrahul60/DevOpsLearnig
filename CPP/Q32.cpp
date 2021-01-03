#include <iostream>
using namespace std;

void main()
{
int* getAr();
int *ptr;
ptr=getAr();
cout<<ptr[2]<<endl;
}
int* getAr()
{
int arr[4]={10,20,30,40};
return arr;
}