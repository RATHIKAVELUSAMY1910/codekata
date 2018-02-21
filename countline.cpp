#include <iostream>
using namespace std;
int main() 
{

	char str[50];
	int i,count=1;
	cout<<"enter the sentence:"<<endl;
	cin>>str; 
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='.')
		{
			count=count+1;

		}
	}
	cout<<count;
	return 0;

}
