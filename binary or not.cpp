#include <iostream>
using namespace std;

int main() {
	string str;
	int count=0;
	cout<<"enter the string"<<endl;
	cin>>str;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='1' || str[i]=='0')
                         count=0;
                         else{
                         count=1;
                         break;
                         	
                         }
	}
	// your code goes here
	if(count!=0){
		cout<<"no";
	}
	else{
		cout<<"yes";
	}
	return 0;
}
