#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<sum;
    return 0;
}
