#include <iostream>
using namespace std;
#include<string.h>
int main()
{
  char a[100];
  int l,t;
  cout<<"name"<<endl;
  cin>>a;
  l=strlen(a);
  t=l/2;
  if(l%2==0)
  {       a[t-1]='*';
          a[t]='*';
          cout<<a;   
      
  }else
  {
      a[t]='*';
      cout<<a;
      }
      return 0;
}
