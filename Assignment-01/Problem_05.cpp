#include <iostream>
#include <cstring>
using namespace std;

void reverse(string& str)
{
    int length = str.length();
    for (int i = 0; i < length; i++) {
        int c = str[i];
        if (islower(c))
            str[i] = toupper(c);
        else if (isupper(c))
            str[i] = tolower(c);       
    }
}
int main()
{
    string str;
    cout<<"Entre a random string: ";
    cin>>str;
    reverse(str);
    cout << str;
    return 0;
}