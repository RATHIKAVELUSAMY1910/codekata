#include <iostream>
using namespace std;

int main() {
	int n,i,sum=0,k,a[100];
	cout<<"Enter arraysize"<<endl;
	cin>>n;
	cout<<"Enter the k value"<<endl;
	cin>>k;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<=k;i++)
	{
		sum=sum+i;
	}
	cout<<sum;
	return 0;
}
