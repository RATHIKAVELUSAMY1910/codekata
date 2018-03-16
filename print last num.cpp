#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char s[100];
    int a,n,b;
    cout<<"Enter the string"<<endl;
        cin>>s;
        cin>>n;
        a=strlen(s);
        b=a-n;
        for(int i=b;i<=a;i++)
        {
            cout<<s[i];
        }
        return 0;
    }
