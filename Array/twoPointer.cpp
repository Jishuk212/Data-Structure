
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {49, 50, 70, 40, 80, 30, 10, 14, 45, 25};
    int left = 0, target = 50;
    int right = sizeof(arr) / sizeof(arr[0]);
    cout << "Hello World";
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