#include <iostream>
using namespace std;

int main() 
{
    int i = 0,n,rem[10];
    int sum = 0;
	cout << "input number"<<endl;
	cin >> n;
	while (n > 0)
	{	
		rem[i] = n%10;
		sum = sum + rem[i];
		n= n/10;
		i++;
	}
	for (i = i-1; i >= 0 ; i--)
	{
		cout << rem[i] << " ";
	}
	
	return 0;
}
