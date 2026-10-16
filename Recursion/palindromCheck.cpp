#include <iostream>
using namespace std;
string palindrom(string s, int length)
{
    if (length == 0)
    {
        return "";
    }
    return s[length - 1] + palindrom(s, length - 1);
}
int main()
{
    string s = "thiht";
    if (s == palindrom(s, s.length()))
    {
        cout << "This is Palindrom";
    }
    else
    {
        cout << "This is not Palindrom";
    };
    return 0;
}