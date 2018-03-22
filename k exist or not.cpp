#include<iostream>
using namespace std;
int main()
{
    int n,k,a[60];
    cout<<"enter the n and k value"<<endl;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
        cout<<"yes";
        break;
        }
    }
    return 0;
}
