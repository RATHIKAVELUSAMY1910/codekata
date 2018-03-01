#include <iostream>
using namespace std;
int main()
{
int a,n=0;
cout<<"Enter the number"<<endl;
cin>>a;
while(a>0)
{
a=a/10;
n++;
}
cout<<n;
return 0;
}
