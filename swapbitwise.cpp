#include <iostream>
using namespace std;
int main(){
    
    int a,b;
    cout<<"enter the a and b value"<<endl;
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout<<a<<b<<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout <<"After Swapping" <<endl;
    cout<<a<<b<<endl;
    return 0;
    
}
