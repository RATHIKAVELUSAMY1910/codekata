#include<iostream>
using namespace std;
#include<string.h>
int main()
{
 char s[100],temp;
 int i,j=0;
 cout<<"Enter any the string"<<endl;
 cin>>s;
 i=0;
 j=strlen(s)-1;
  while(i<j)
   {
   temp=s[i];
   s[i]=s[j];
   s[j]=temp;
   i++;
   j--;
   }
 cout<<"Reverse string is"<<" "<<s;
 return 0;
}
