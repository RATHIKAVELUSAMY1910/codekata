#include<iostream>
using namespace std;
int main()
{
    int n,k,a[30];
    cout<<"enter the n and k value"<<endl;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
        if(a[k]%2!=0)
        {
            cout<<a[k];
        }
    
    return 0;
}
