#include <iostream>
using namespace std;
string reverseString(string s, int length)
{
    if (length == 0)
    {
        return "";
    }
    return s[length - 1] + reverseString(s, length - 1);
}
int main()
{
    string s = ".|..";
    int length = s.length();
    cout << reverseString(s, length);
    return 0;
}