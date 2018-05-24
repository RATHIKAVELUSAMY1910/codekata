#include <iostream>
using namespace std;
class NoOfSpaces
{
int p,a,d,i,ar[1000],c=0;
string s;
public:
NoOfSpaces()
{
get();
count();
display();
}
void get()
{
cout<<"INPUT"<<endl;
getline(cin,s);
}
void count()
{
p=s.length();
for(i=0;i<p;i++)
{
if(s[i]==' ')
{c++;}
}
}
void display()
{
cout<<"OUTPUT"<<endl;
cout<<c;
}
};
int main()
{
NoOfSpaces nc;
return 0;
}
