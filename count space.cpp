#include <iostream>
using namespace std;
void main()
{
int p,d,i,ar[1000],c=0;
string s;
cout<<"INPUT"<<endl;
getline(cin,s);
p=s.length();
for(i=0;i<p;i++)
{
if(s[i]==' ')
{
  c++;
}
}
cout<<c;
}
return 0;
}
