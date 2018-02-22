#include <iostream>
using namespace std;
int main()
{
    int n, a=0,b=1,temp= 0;
    cout << "Enter the number"<<endl;
    cin >> n;
    cout << "Fibonacci Series"<<endl;
    for (int i = 1; i <= n; ++i)
    {
        if(i == 1)
        {
            cout <<a;
            continue;
        }
        if(i == 2)
        {
            cout <<b;
            continue;
        }
        temp=a+b;
        a=b;
        b=temp;
        cout <<temp;
    }
    return 0;
}
