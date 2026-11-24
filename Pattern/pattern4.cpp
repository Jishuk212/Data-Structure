#include <iostream>
using namespace std;
void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == 1 || i == 2)
            {
                cout << " * ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;
    pattern4(n);
    return 0;
}