#include <iostream>
using namespace std;
int main()
{
int a,n,b,temp=0;
cout<<"Enter a num"<<endl;
cin>>n;
b=n;
while(n>0)
{
a=n%10;
n=n/10;
temp=temp*10+a;
}
if(temp==b)
{
cout<<"Palindrome"<<endl;
}
else
{
cout<<"Not Palindrome"<<endl;
}
return 0;
}
