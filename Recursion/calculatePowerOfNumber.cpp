#include <iostream>
using namespace std;
int powerOfNumber(int b, int p)
{
    if (p == 0)
    {
        return 1;
    }
    return b * powerOfNumber(b, p - 1);
}
int main()
{
    int b = 9;
    int p = 3;
    cout << powerOfNumber(b, p);
    return 0;
}