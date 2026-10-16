#include <iostream>
using namespace std;
int main()
{
    string s = "apple";
    string s1 = "Apple";
    cout << (s < s1) << endl;
    cout << (s > s1) << endl;
    cout << (s <= s1) << endl;
    cout << (s >= s1) << endl;
    return 0;
}