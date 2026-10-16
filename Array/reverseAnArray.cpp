#include <iostream>
#include <vector>
using namespace std;
void reverse(vector<int> &nums)
{
    int j = nums.size() - 1;
    for (int i = 0; i < j; i++)
    {
        int t = nums[i];
        nums[i] = nums[j];
        nums[j] = t;
        j -= 1;
    }
}
int main()
{
    vector<int> nums = {5, 2, 6, 7, 8, 9, 3, 1};
    cout << "size of vector is: " << nums.size() << endl;
    cout << "Before reverse array is like this: " << endl;
    for (int i : nums)

    {
        cout << i << " ";
    }
    reverse(nums);

    cout << endl
         << "after reverse array is like this: " << endl;
    for (int i : nums)
    {
        cout << i << " ";
    }
    return 0;
}