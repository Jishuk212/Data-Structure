#include <iostream>
using namespace std;
int countNoOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int count = 1;
    return countNoOfDigits(n / 10) + count;
}
int main()
{
    int n = 202;
    cout << countNoOfDigits(n);
    return 0;
}