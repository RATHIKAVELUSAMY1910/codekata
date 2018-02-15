#include<iostream>
using namespace std;
int main()
{
    int a,b,count;
    cout<<"enter the a,b value"<<endl;
    cin>>a>>b;
     for(int i=a; i<=b; i++)
     {
     count=0;
     for(int j=2; j<i; j++)
     {
     if(i%j==0)
     {
     count++;
     break;
     }
     }
    if(count==0)
    {
    cout<<i<<"this is a prime "<<endl;
    	
    }
	}
	return 0;
}
