#include<iostream>
using namespace std;
int main()
{
int n,a,d,sum=0,l;
cout<<"enter the n,a,d values"<<endl;
cin>>n>>a>>d;
l=(n*d)+a-1;
sum=((a+l)*n)/2;
cout<<sum;
return 0;
}
