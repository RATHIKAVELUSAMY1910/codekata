#include <iostream>
using namespace std;
#include <string.h>
int main() 
{
char str[30];
int i,n;
cin>>str;
n=strlen(str);
for(i=0;i<n;i++)
{
if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
{
str[i]='+';
}
}
for(i=n;i>=0;i--)
{
if(str[i]!='+')
{
cout<<str[i];
}
}
 return 0;
}
