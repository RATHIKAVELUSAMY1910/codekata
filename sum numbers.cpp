#include <iostream>
using namespace std;
int main()
{
  int n,a,count=0,r; 
  cout<<"enter the total numbers"<<endl;
  cin>>n;
  cout<<"Enter the number"<<endl;
  cin>>a;
  while(a!=0)
  {
  r=a%10;
  count=count+r;
  a=a/10;
  }
  cout<<"The sum is"<<" "<<count;
  return 0;
}
