#include<iostream>
using namespace std;
int main()
{
    int a[40],i,n;
    cout<<"number:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cout<<" ";
        }
        else if(a[i]%2==1)
        {
            cout<<a[i];
        }
        
    }return 0;
}
