#include <iostream>
using namespace std;
#include<string.h>
int main() 
{
char str[50];
int i,len;
cout<<"enter the string"<<endl;
cin>>str;
len=strlen(str);
if(str[0]>91)
{
str[0]=str[0]-32;
}
for(i=0;i<len;i++)
{
if(str[i]==' ')
{
if(str[i+1]>91)
{
str[i+1]=str[i+1]-32;
}
}
cout<<"the camel case word is"<<str<<endl;
return 0;
}
}
