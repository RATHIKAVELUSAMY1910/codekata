#include <iostream>
using namespace std;

int main() {
	int a,b,temp=1;
	cout<<"enter the a and b numbers"<<endl;
	cin>>a>>b;
	for(int i=1;i<=b;i++)
	{
		temp=temp*a;
	}
	cout<<temp;
	
	return 0;
}
