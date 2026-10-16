#include "iostream"
using namespace std;
void sort(int arr[], int length, int index)
{
    if (index == length)
    {
        return;
    }
    int element = arr[index];
    for (int i = index; i < length; i++)
    {
        if (arr[i] < arr[index])
        {
            swap(arr[i], arr[index]);
        }
    }
    sort(arr, length, index + 1);
}
void traverse(int arr[], int size, int index)
{
    if (index == size)
    {
        return;
    }
    cout << arr[index] << " ";
    traverse(arr, size, index + 1);
}
int search(int arr[], int length, int index, int key)
{
    if (index == length)
    {
        return -1;
    }
    if (arr[index] == key)
    {
        return index;
    }
    search(arr, length, index + 1, key);
}
int main()
{
    int arr[] = {2, 5, 6, 9, 8, 7, 3, 2, 1, 15, 01, 456, 23, 45, 67, 89, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    traverse(arr, n, 0);
    cout << endl;
    cout << search(arr, n, 0, 4500);
    cout << endl;
    sort(arr, n, 0);
    cout << search(arr, n, 0, 456);
    cout << endl;
    traverse(arr, n, 0);
    return 0;
}