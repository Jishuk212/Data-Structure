
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {44, 50, 70, 40, 80, 300, 120, 140, 150, 250};
    int left = 0, target = 740;
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