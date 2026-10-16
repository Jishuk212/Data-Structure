#include <iostream>
using namespace std;
int sumOfAllElementInArray(int arr[], int size)
{
    if (size == 1)
    {
        return arr[0];
    }
    return arr[size - 1] + sumOfAllElementInArray(arr, size - 1);
}
int main()
{
    int arr[] = {4, 5, 9, 18, 18, 18};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << sumOfAllElementInArray(arr, size);
    return 0;
}