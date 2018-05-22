#include <iostream>
using namespace std;
int main()
{
   int a[20],i,j,n,count;
   cout<<"enter the size of array"<<endl;
   cout<<"enter the elements"<<endl;
   cin>>n;
   for(i=0;i<n;i++)
   {
   	cin>>a[i];
   }
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		if(i!=j)
   		{
   		if(a[i]!=a[j])
   		{
   			count++;
   		}
   	}
   	}
   }
   
   if(count==3)
   {
   	cout<<a[i];
   	
   }
   else
   {
   	cout<<"none";
   }
   return 0;
}
