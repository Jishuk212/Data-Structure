#include <iostream>
using namespace std;
int decimalNumberToBinaryNumber(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int digit = n % 2;

    // Both are currect

    // return decimalNumberToBinaryNumber(n / 2) * 10 + digit;
    return digit + decimalNumberToBinaryNumber(n / 2) * 10;
}
int main()
{
    int n = 25;
    cout << decimalNumberToBinaryNumber(n);
    return 0;
}
