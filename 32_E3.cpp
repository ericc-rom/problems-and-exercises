#include <iostream>
#include <cmath>
using namespace std;

bool estePrim(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void prime(int x, int y)
{
    if (x > y)
    {
        x = y;
        y = x;
    }
    for (int i = x; i <= y; i++)
    {
        if (estePrim(i))
            cout << i << " ";
    }
    cout << endl;
}
