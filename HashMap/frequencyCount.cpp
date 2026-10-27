#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
int main()
{
    int arr[] = {1, 5, 4, 2, 3, 2, 5, 4, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto it : m)
    {
        cout << it.first << " : " << it.second << endl;
    }
    return 0;
}