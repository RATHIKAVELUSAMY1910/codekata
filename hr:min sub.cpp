#include<iostream>
using namespace std;
int main()
{
int h,h1,h2,m,m1,m2;
cout<<"Enter the hour and miniute"<<endl;
cin>>h1>>m1;
cin>>h2>>m2;
h=h1-h2;
m=m1-m2;
cout<<"The time is: "<<h<<" "<<m;
return 0;
}
