#include <iostream>
using namespace std;

int pr(int x)
{
    if (x < 2)
        return 0;
    for (int d = 2; d * d <= x; d++)
    {
        if (x % d == 0)
            return 0;
    }
    return 1;
}

int sdiv(int y)
{
    int s = 0;
    for (int d = 1; d <= y; d++)
        if (y % d == 0)
            s += d;
    return s;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int sd = sdiv(i);
        if (pr(sd)) 
            cout << i << " ";
    }
}