#include <iostream>
#include <vector>
using namespace std;
bool linearSearch(vector<int> nums, int value)
{
    for (int val : nums)
    {
        if (val == value)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<int> nums = {5, 2, 6, 7, 8, 9, 3, 1};
    cout << linearSearch(nums, 51);
    return 0;
}