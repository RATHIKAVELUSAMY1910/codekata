#include <iostream>
using namespace std;
int main()
{
	int mint,hour,time;
	cout<<"enter the mints"<<endl;
  cin>>mint;
	hour=mint/60;
	time=mint%60;
	cout<<"the hour is"<<" "<<hour<<'\n'<<"the mint is"<<" "<<time;

	return 0;
}
