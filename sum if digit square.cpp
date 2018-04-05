#include <iostream>
using namespace std;
int main() 
{
int n,sum=0,square,rem;
cout<<"enter the number"<<endl;
cin>>n;
while(n!=0)
{
rem=n%10;
square=rem*rem;
sum=sum+square;
n=n/10;
}
cout<<"the sum of the square is"<<" "<<sum;
return 0;
}
