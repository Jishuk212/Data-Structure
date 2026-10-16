#include <iostream>
using namespace std;
int fibonachiSequence(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonachiSequence(n - 1) + fibonachiSequence(n - 2);
}
int main()
{
    int n = 40;
    cout << fibonachiSequence(n) << " ";
    return 0;
}