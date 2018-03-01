#include <iostream>
using namespace std;
int main()
{
int n,a=0;
cout<<"Enter the number"<<endl;
cin>>n;
while(n>0)
{
n=n/10;
a++;
}
cout<<a;
return 0;
}
