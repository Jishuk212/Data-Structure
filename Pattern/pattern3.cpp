#include <iostream>
using namespace std;
void pattern1()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
int main()
{
    return 0;
}
