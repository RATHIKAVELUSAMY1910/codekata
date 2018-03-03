#include<iostream>
using namespace std;
int main()
{
char a[20],r[20];
int i,n,c,count=0,d=0;
cout<<"Enter the string"<<endl;
cin>>a;
for(i=0;a[i]!='\0';i++)
{
count++;
}
for(i=count-1;i>=0;i--)
{
r[count-i-1]=a[i];
}
for(i=0;i<count;i++)
{
if(r[i]==a[i])
{
d++;
}
}
if(d>0)
{
cout<<"yes";
}
else
{
cout<<"no";
}
return 0;
}
