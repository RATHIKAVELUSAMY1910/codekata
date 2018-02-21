#include <iostream>
using namespace std;
int main() 
{
int number=0;
string str;
cout<<"enter the string"<<endl;
cin>>str;
  for (int i = 0; i < str.length(); i++)
  {
  	if(str[i]>= '1' && str[i]<= '9')
  	
            number++;
  }
  cout<<number;
  return 0;
}
