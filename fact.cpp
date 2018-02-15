#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    cout<<"enter the number";
    cin>>num;
    for(int i=1;i<=num;i++)
    {
    fact=fact*i;
    }
cout<<"the fact num is"<<fact<<endl;
return 0;
}
