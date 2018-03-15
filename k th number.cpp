#include <iostream>
using namespace std;
int main()
{
    int n,k,a[60];
    cout<<"enter the n and k values"<<endl;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==k)
        {
        cout<<"k th number is"<<endl;
        cout<<a[i];
        }
    }
    return 0;
}
