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
	
if(count==1)
	cout<<a1[0];
	


	return 0;
}
