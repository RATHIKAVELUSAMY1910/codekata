#include <iostream>
using namespace std;

int main()
{
	int a[20];
	int n,temp;
	cout<<"enter the number of elements"<<endl;
	cin>>n;
	cout<<"enter the values"<<endl;
            for(int i=0;i<n;i++)
            {
            	cin>>a[i];
            }
            for(int i=0;i<n;i++)
            {
            	for(int j=0;j<n-1;j++)
            	{
            		if(a[j]>a[j+1])
            		{
            			temp=a[j];
            			a[j]=a[j+1];
            			a[j+1]=temp;
            		}
            	}
            }
          if(n%2==0)
{
cout<<a[(n-1)/2],a[n/2];
}
else
{
cout<<a[(n-1)/2];
}
return 0;
}
