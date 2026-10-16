#include <iostream>
using namespace std;
bool isArraySorted(int arr[], int length)
{
    if (length == 0 || length == 1)
    {
        return true;
    }
    if (arr[length - 1] < arr[length - 2])
    {
        return false;
    }
    return isArraySorted(arr, length - 1);
}
int main()
{
    int arr[] = {5, 6, 6, 7, 9};
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << isArraySorted(arr, length);
    return 0;
}