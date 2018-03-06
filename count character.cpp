#include <iostream>
using namespace std;
#include<string.h>
int main()
{
char a[1000];
int i,n,c,count=0;
cout<<"Enter the string"<<endl;
cin>>a;
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==' ')
{
count++;
}
}
c=n-count;
cout<<"The result is"<<c;
return 0;
}
