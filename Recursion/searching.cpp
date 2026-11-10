#include <iostream>
using namespace std;
void search(int arr[], int target, int size)
{
    if (size <= 0)
    {
        cout << "Element not found in the array.\n";
        return;
    }
    else if (arr[size - 1] == target)
    {
        cout << "Element found at index: " << size - 1 << endl;
        return;
    }
    search(arr, target, size - 1);
}
int main()

{
    int arr[] = {52240, 400, 60, 2002, 102, 254, 200, 570, 180};
    int target = 2000;
    int size = sizeof(arr) / sizeof(arr[0]);
    search(arr, target, size);
    return 0;
}