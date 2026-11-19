
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {294, 540, 270, 172, 181, 278, 114, 74, 44, 24};
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