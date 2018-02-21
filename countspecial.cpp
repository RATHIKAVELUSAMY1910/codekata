#include <iostream>
using namespace std;
int main() 
{
int special=0;
string str;
cout<<"enter the string"<<endl;
cin>>str;
  for (int i = 0; i < str.length(); i++)
  {
 if ((str[i] >= 'A' && str[i] <= 'Z')|| (str[i] >= 'a' && str[i] <= 'z')||(str[i]>= '0' && str[i]<= '9'))
 cout<<"";
 else
        special++;
  }
  cout<<special;
  return 0;
}
