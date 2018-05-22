#include <iostream>
using namespace std;
int main()
{
int a,b,c,i,d,e;
cout<<"Enter the number"<<endl;
cin>>a>>b;
c=a*b;
for(i=1;i<=b;i++)
{
if(c==(i*i))
{
e=c;
}
}

  if(c==e)
  {
  cout<<"yes"<<endl;
  }
  else
  {
  cout<<"no"<<endl;
  }
return 0;
}
