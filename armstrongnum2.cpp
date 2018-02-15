#include <iostream>
using namespace std;

int main()
{
  int a,b,i,num,digit,sum;

  cout << "Enter a and b number: ";
  cin >>a>>b;
  for(i =a; i <=b; i++)
  {
        sum = 0;
        num = i;

        for(; num > 0; num /= 10)
        {
            digit = num % 10;
            sum = sum + digit * digit * digit;
        }

        if(sum == i)
        {
            cout << i << endl;
        }
  }

  return 0;
}
