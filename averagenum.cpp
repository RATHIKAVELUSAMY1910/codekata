#include <iostream>
using namespace std;
int main()
{
  int n,c,i,sum=0,avg;
      cout<<"Enter the number"<<endl;
      cin>>n;
      int a[n];
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          sum=sum+a[i];
      }
      avg=sum/n;
      cout<<avg;
  return 0;    
  }
