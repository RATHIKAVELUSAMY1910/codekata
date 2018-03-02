#include <iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter your choice"<<endl;
cin>>a;
if(a<=10)
{
switch(a)
{
case 1:
cout<<"One";
break;
case 2:
cout<<"Two";
break;
case 3:
cout<<"Three";
break;
case 4:
cout<<"Four";
break;
case 5:
cout<<"Five";
break;
case 6:
cout<<"Six";
break;
case 7:
cout<<"Seven";
break;
case 8:
cout<<"Eight";
break;
case 9:
cout<<"Nine";
break;
case 10:
cout<<"Ten";
break;
}
}
else
{
cout<<"Enter the input upto 10";
}
return 0;
}
