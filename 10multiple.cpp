#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	while(n!=0)
	{
		if(n%10==0)
		{
			cout<<n;
			break;
		}
		n++;
	}
	return 0;
}
