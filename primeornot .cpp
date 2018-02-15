#include<iostream>
using namespace std;
int main(){
int num,count=0;
cout<<"enter the number";
cin>>num;
for(int i=1;i<=num;i++)
{
if (num%i==0)
{
count++;
}	
}
if(count==2)
{
cout<<"the number is prime";
}
else
{
cout<<"the number is not prime";
}
return 0;
}
