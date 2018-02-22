#include <iostream>
using namespace std;
int main(){
    
    int a,b;
    cout<<"enter the a value"<<endl;
    cout<<"enter the b value"<<endl;
    cin>>a>>b;
    cout<<"before swapping"<<endl;
    cout << "a value is "<< a <<endl;
    cout << "b value is "<< b <<endl;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout <<"After Swapping" <<endl;
    cout << "a value is "<< a <<endl;
    cout << "b value is "<< b <<endl;
	
    return 0;
    
}
