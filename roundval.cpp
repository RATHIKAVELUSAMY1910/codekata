#include <iostream>
using namespace std;
int main()
{
    float n;
    int r;
    cout<<"number"<<endl;
    cin>>n;
    if(n<0)
    {
        r=n-0.5;
    }
    else
    {
        r=n+0.5;
    }
    cout<<r;
    return 0;
}
