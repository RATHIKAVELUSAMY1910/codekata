#include <iostream>
using namespace std;

int main() {
char a[100];
int i,n,c,count=0;
cout<<"Enter the string";
cin>>a;

for(i=0;a[i]!='\0';i++)
{
 if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='O')||(a[i]=='I')||(a[i]=='U'))
{
count++;
}
}
if(count>0)
{
cout<<"Yes";
}
else
{
cout<<"No";
}
return 0;
}
