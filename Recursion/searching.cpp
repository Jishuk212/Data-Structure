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
    int arr[] = {5224, 4000, 6000, 200, 102, 020, 210, 070, 0100};
    int target = 20;
    int size = sizeof(arr) / sizeof(arr[0]);
    search(arr, target, size);
    return 0;
}