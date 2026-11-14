#include <iostream>
using namespace std;
int main()
{
    int arr[] = {40, 50, 750, 760, 240, 370, 300, 120, 140, 150, 250};
    int left = 0, target = 350;
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