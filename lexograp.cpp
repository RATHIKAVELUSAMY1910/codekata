#include<iostream>
using namespace std;
#include<string.h>
int main() 
{
	int i,j,temp=0;
	char a[100],n;
	cout<<"enter the total numbers"<<endl;
	cin>>n;
	for(i=0;i<=n;i++)
	{
	    
	    cin>>a[i];
	}
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
			            a[j]=temp;
			}
		}
	}
	cout<<"the lcm is"<<" "<<a;
  return 0;
}
