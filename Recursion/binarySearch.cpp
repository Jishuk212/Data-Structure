#include <iostream>
using namespace std;
int binarySearch(int arr[], int target, int left, int right)
{
    if (left > right)
    {
        return -1;
    }
    int mid = (left + right) / 2;
    if (target == arr[mid])
    {
        return mid;
    }
    else if (target < arr[mid])
    {
        binarySearch(arr, target, left, mid);
    }
    else if (target > arr[mid])
    {
        binarySearch(arr, target, (mid + 1), right);
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 19};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << binarySearch(arr, target, 0, (size - 1));
    return 0;
}