#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter the number"<<endl;
  cin>>n;
  if(n%2==0)
    {
     cout<<"The near even num is"<<n;
    }
  else
    {
      cout<<"The near even num is"<<n-1;
   }
  return 0;
}
