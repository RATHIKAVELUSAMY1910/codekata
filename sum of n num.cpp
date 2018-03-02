#include <iostream>
using namespace std;
int main()
{
  int n,count=0,rem;  
  cout<<"Enter the number"<<endl;
  cin>>n;
  while(n!=0)
  {
  rem=n%10;
  count=count+rem;
  n=n/10;
  }
  cout<<"The sum is"<<count;
  return 0;
}
