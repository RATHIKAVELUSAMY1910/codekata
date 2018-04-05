#include <iostream>
using namespace std;
int main()
{
char a[10];
cout<<"enter the day"<<endl;
cin>>a;
if(a[0]=='S'||a[0]=='s')
{
cout<<a<<" "<<"is a holiday"<<endl;
}
else
{
cout<<a<<" "<<"is a not holiday"<<endl;   
}
return 0;
}
