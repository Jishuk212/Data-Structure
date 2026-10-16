#include <iostream>
using namespace std;
bool isPrime(int n, int i)
{
    if (n <= 2)
    {
        return (n == 2) ? true : false;
    }
    else if (n % i == 0)
    {
        return false;
    }
    else if (i * i > n)
    {
        return true;
    }
    else
    {
        return isPrime(n, i + 1);
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPrime(n, 2))
    {
        cout << n << " is a prime number.\n";
    }
    else
    {
        cout << n << " is not a prime number.\n";
    }
}