#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<char, int> m;
    string s = "JishuSinghJii";
    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]]++;
    }
    m.insert({'m', 12});
    cout << m.at('z');
    return 0;
}