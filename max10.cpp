#include <iostream>
using namespace std;
int main(){
    int a[10];
    int max,i;
    cout<<"enter the 10 numbers"<<endl;
    for( i=0;i<=10;i++)
    {
    	cin>>a[i];
    }
    max= a[0];
    for (i = 0; i < 10; i++) 
    {
if (a[i] >max) 
{
max = a[i];
}
}
cout<<"the max num is"<<" "<<max<<endl;
return 0;
}
