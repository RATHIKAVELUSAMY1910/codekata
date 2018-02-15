#include <iostream>
using namespace std;
int main()
{
int n,a=0;
cout<<"Enter a number";
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<"number if digits"<<a;
return 0;
}
