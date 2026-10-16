#include <iostream>
using namespace std;
void printNumber(int n)
{
    if (n == 0) // Base case
    {
        return;
    }
    printNumber(n - 1); // Recursive call
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNumber(n);
    return 0;
}