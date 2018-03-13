#include <iostream>
using namespace std;
int main()
{
    char s[100];
    int i,j,count=0;
    cout<<"enter the string"<<endl;
    cin>>s;
    for(i=0;s[i]!=0;i++)
    {
        for(j=i+1;s[j]!=0;j++)
        {
            if(s[i]==s[j])
            {
            count++;
               }
        }
    }
        if(count==0)
        {
        cout<<"yes";
        }
        else
        {
           cout<<"no";
        }
        return 0;
}
