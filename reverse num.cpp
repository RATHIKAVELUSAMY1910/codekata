#include<iostream>
using namespace std;
#include<string.h>
int main()
{
 char n[100],temp;
 int i,j=0;
 cout<<"Enter any the number"<<endl;
 cin>>n;
 i=0;
 j=strlen(n)-1;
  while(i<j)
   {
   temp=n[i];
   n[i]=n[j];
   n[j]=temp;
   i++;
   j--;
   }
 cout<<"Reverse number is"<<" "<<n;
 return 0;
}
