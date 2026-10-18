#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 5, 4, 2, 3, 6, 8, 5, 1, 2, 4, 5, 9, 6, 3, 2, 5, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    for (auto it : mp)
    {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}