#include <iostream>
using namespace std;

int main() {
	int a[20],n,i,j,temp;
	cout<<"enter the size of array"<<endl;
	cout<<"enter the elements"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n;i++)
	{
	if(a[i]==i)
	{
		cout<<a[i];
	}
	}
	for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
	{
	if(a[i]>a[j])
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		}
	}
	}
return 0;
}
