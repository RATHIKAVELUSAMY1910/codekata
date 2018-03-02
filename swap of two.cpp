#include <iostream>
using namespace std;

int main()
{
    int a , b , temp;
    cout<<"enter the a and b value";
    cin>>a>>b;
    cout << "Before swapping" << endl;
    cout<< a <<b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After swapping" << endl;
    cout <<a <<b << endl;

    return 0;
}
