#include <iostream>
using namespace std;
int main() 
{
   int n,p=1,a;
   cout<<"enter the number"<<endl;
   cin>>n;
   while(n!=0)
   {
       a=n%10;
       p=p*a;
       n=n/10;
   }
   cout<<"product num is"<<" "<<p;
   return 0;
}
