#include <iostream>
using namespace std;
int addNaturalNumber(int a)
{
    if (a == 1)
    {
        return 1;
    }
    return a + addNaturalNumber(a - 1);
}
int main()
{
    int a = 50;
    cout << addNaturalNumber(a);
    return 0;
}
