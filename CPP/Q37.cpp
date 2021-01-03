#include <iostream>
using namespace std;
int main(){
  int i,j;
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
if(i==j)
{
continue;
}
cout<<"i="<<i<<"j="<<j<<endl;
}
}

}

