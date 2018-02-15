#include <iostream>
using namespace std;
int main()
{
  int on,n,r,sum = 0;
  cout << "Enter the number"<<endl;
  cin >> on;
  n = on;
  while(n!=0)
  {
      r=n%10;
      sum += r * r * r;
      n /= 10;
  }

  if(sum == on)
  {
    cout <<"yes"<<endl;
  }
  else
  {
    cout <<"no"<<endl;
  }
  return 0;
}
