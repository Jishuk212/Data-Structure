#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<char, int> m;
    string s = "Jishusingh";
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    cout << m['i'];
    return 0;
}