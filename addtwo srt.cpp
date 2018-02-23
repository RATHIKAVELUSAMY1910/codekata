#include <iostream>
using namespace std;

int main() {
	char  str1[20],str2[30];
	int i,j;
	cout<<"enter the string1"<<endl;
	cin>>str1;
	cout<<"enter the string2"<<endl;
	cin>>str2;
            for( i=0;str1[i]!='\0';i++)
	{
		
	}
	for( j=0;str2[j]!='\0';j++)
	{
		str1[i]=str2[j];
		i++;
	}
	str1[i]='\0';
	cout<<str1;
	
	return 0;
}
