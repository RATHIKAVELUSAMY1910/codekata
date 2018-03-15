#include<iostream>
using namespace std;
int main()
{
	int s[200],i,n=4,k,temp,j=0;
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
	for(k=i+1;k<n;k++)
	{ 
		if(s[i]>s[k])
		{
	    temp=s[i];
	    s[i]=s[k];
	   s[k]= temp;
	   j++;
	}
	}
	}cout<<j;
	return 0;
}
