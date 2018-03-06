#include <iostream>
using namespace std;
int main()
{
int i,temp; 
    string str;
    cout<<"enter the value";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        temp=str[i];
        if(temp>='0' && temp<='9')
        {
            cout<<"Yes";
            break;
            
        }
        else
        {
            cout<<"No";
            break;
        }
    }
    return 0;
}
