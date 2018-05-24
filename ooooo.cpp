#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    char s;
        cout<<"Enter the number"<<endl;
        cin>>a>>s>>b;
        if(s=='/')
        {
            c=a/b;
            cout<<c;
        }
        else
        {
            c=a%b;
            cout<<c;
        }
        
    return 0;
}
