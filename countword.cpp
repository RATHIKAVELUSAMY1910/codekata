#include <iostream>
using namespace std;
int main( )
{
	char str[80];
	
	cout << "Enter a string: "<<endl;
	cin.getline(str,80);
	
	int words = 1; 
	
	for(int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ') 
		{
			words++;
		} 		
	}

	cout << "The number of words  " << words<< endl;

	return 0;
}
