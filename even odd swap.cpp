#include <iostream>
using namespace std;
#include<string.h>
int main(void)
{
char str[10];
int temp,n,i;
cout<<"enter the string"<<endl;
cin>>str;
n=strlen(str);
if(n%2==0)
{
for(i=0;i<n;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
cout<<str;
}
else
{
for(i=0;i<n-1;i+=2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
cout<<str;
}
return 0;
}
