#include <iostream>
#include <cmath>
using namespace std;
int countDigit(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return 1 + countDigit(n / 10);
}
int armstrong(int number, int digit)
{
    if (number == 0)
    {
        return 0;
    }
    return pow(number % 10, digit) + armstrong(number / 10, digit);
}
int main()
{
    int n = 2222;
    int digits = countDigit(n);
    cout << armstrong(n, digits);

    return 0;
}