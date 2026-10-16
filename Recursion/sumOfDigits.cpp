#include <iostream>
using namespace std;
int sumOfDigit(int a)
{
    if (a == 0)
    {
        return 0;
    }
    int digit = a % 10;
    return digit + sumOfDigit(a / 10);
}
int main()
{
    int n = 252;
    cout << sumOfDigit(n);
    return 0;
}