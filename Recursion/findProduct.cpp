#include <iostream>
using namespace std;
int product(int a, int b)
{
    if (a < b)
    {
        product(b, a);
    }
    if (b == 1)
    {
        a;
    }
    return a + product(a, b - 1);
}
int main()
{
    int n = 25;
    int m = 5;
    cout << product(n, m);
    return 0;
};