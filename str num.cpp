#include<iostream>
using namespace std;
int main()
{
	char s[100];
	int i;
	cout<<"enter the string"<<endl;
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		cout<<"the num is"<<" "<<s[i];
	}
	return 0;
	
}
