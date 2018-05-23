#include <iostream>
using namespace std;

int main() {
	int a[20],a1[20],n,i,j,count=0,temp;
	cout<<"enter the size of array"<<endl;
	cout<<"enter the elements"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(i!=j)
			{
			if(a[i]==a[j])
			{
				a1[count]=a[i];
				count++;
			}
		}
	}
	}
for(i=0;i<count;i++)
{
	cout<<a1[i]<<endl;
}

	return 0;
}
