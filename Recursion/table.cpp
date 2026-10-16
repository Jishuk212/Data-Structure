#include <iostream>
using namespace std;
void table(int key, int count)
{
    if (count == 11)
    {
        return;
    }
    cout << key << " * " << count << " = " << key * count << endl;
    table(key, count + 1);
}
int main()
{
    int n = 15;
    table(n, 1);
    return 0;
}