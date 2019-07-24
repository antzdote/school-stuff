#include <iostream>
#include <cstring>

using namespace std;

bool is_palindrome (string s)
{
    if (s.length()<=1)
    {
        return true;
    }
    char first=s[0];
    char last=s[s.length()-1];
    if (first==last)
    {
        string shorter=s.substr(1,s.length()-2);
        return is_palindrome(shorter);
    }
    else
    {
        return false;
    }
}

int main()
{
    string s;
    cout<<"Enter a string type: ";
    getline(cin, s);

    if(is_palindrome(s))
    {
        cout<<"a palindrome!";
    }
    else
    {
        cout<<"too bad not a palindrome!";
    }



    return 0;
}
