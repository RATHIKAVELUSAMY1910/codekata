#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Enter a character "<<endl;
    cin >> c;
    char lowercase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    char uppercase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (lowercase || uppercase)
        cout << c << " is a vowel"<<endl;
    else
        cout << c << " is a consonant"<<endl;

    return 0;
}
