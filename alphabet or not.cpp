#include <iostream>
using namespace std;
int main()
{
	char alphabet;
	cout<<"Enter a alphabet ";
	cin>>alphabet;
	if((alphabet>='a'&& alphabet<='z') || (alphabet>='A' && alphabet<='Z'))
	{
		cout<<"the character is a alphabet"<<endl;
	}
	else
	{
		cout<<" the character is not a alphabet"<<endl;
	}
return 0;
}
