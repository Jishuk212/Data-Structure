#include <iostream>
using namespace std;
int hcf(int a, int b)
{
    if (a > b)
    {
        return hcf(b, a); // Recursive case
    }
    if (b % a == 0)
    {
        return a; // Base case
    }
    return hcf(b % a, a); // Recursive case
}
int main()
{
    int a = 90;
    int b = 35;
    cout << "HCF of " << a << " and " << b << " is : " << hcf(a, b);
    return 0;
}