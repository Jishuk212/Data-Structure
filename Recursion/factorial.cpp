#include <iostream>
using namespace std;
int factorial(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    return a * factorial(a - 1);
}
int main()
{
    int val = 5;
    cout << "Hello Developer\n";
    cout << factorial(val);
    return 0;
}