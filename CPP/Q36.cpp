#include <iostream>
using namespace std;
int main(){
  int arr[2][3][2]={{{2,4},{4,8},{3,4},},{{2,2},{2,3},{3,4},}};
    cout<<**(*arr+1)+2+7<<endl;
    cout<<**(*arr+1)<<endl;
    cout<<***(arr+1)+5+4;
}

