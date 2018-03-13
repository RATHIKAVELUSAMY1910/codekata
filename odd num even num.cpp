#include <iostream>
using namespace std;
#include <string.h>
int main()
{
	char s[50];
	int i,n;
	cout<<"Enter the string"<<endl;
	cin>>s;
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(i%2==0)
		{
		cout<<s[i];
		}
   }
cout<<" ";
	for(i=0;i<n;i++)
	{
		if(i%2!=0)
		{
			cout<<s[i];
		}
	}
	return 0;
}
