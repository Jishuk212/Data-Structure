#include <iostream>
using namespace std;
class BigOLogn
{
public:
    static int binarySearch(int arr[], int size, int target)
    {
        int left = 0;
        int right = size - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (arr[mid] == target)
                return mid;
            else if (arr[mid] < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }
};
int main()
{
    BigOLogn obj = BigOLogn();

    int arr[] = {2, 3, 5, 8, 9, 12, 47, 52};
    int target = 47;
    int size = (sizeof(arr) / sizeof(arr[0]));
    cout << obj.binarySearch(arr, size, target);
    return 0;
}