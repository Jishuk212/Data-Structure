#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i % 2 == 0)
            {
                cout << " 1 ";
            }
            else
            {
                cout << " 2 ";
            }
        }
        cout << endl;
    }
}