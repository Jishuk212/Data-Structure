#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 5, 9, 6, 4, 7, 3, 13, 14, 15};
    int left = 0, target = 50;
    int right = sizeof(arr) / sizeof(arr[0]);
    for (left; left < sizeof(arr) / sizeof(arr[0]); left++)
    {
        while (left < right)
        {
            if (arr[left] + arr[right] == target)
            {
                cout << "[" << left << " , " << right << "]";
                break;
            }
            right--;
        }
    }
    return 0;
}