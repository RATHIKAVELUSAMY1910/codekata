#include <iostream>
using namespace std;
int main()
{
    int n1,n2,gcd,lcm;
    cout<<"enter the two numbers"<<endl;
    cin>>n1>>n2;
    for(int i=1;i<=n1&&i<=n2;i++)
    {
        if(n1%i==0&&n2%i==0)
        {
            gcd=i;
        }
    }
   
lcm=(n1*n2)/gcd;
cout<<"the lcm is"<<" "<<lcm;
return 0;
}

