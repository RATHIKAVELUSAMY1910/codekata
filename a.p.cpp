#include<iostream>
using namespace std;
#include<math.h>
int main()
{
 int a,d,n,i,nth;
 int sum=0;
 cout<<"Enter the first number";
 cin>>a;
 cout<<"Enter the terms";
 cin>>n;
 cout<<"Enter the common diff";
 cin>>d;
 sum=(n*(2*a+(n-1)*d))/2;
 nth=a+(n-1)*d;
 cout<<"the A.P. is";
 for(i=a;i<=nth;i=i+d)
 {
  if(i!=nth)
  {
    cout<<i<<" + ";
  }
  else
  {
    cout<<i<<" = "<<sum;
  }
 }
return 0;
}
