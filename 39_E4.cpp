#include <iostream>
#include <cmath>
using namespace std;

int pr(int a)
{
    int d, nd = 0;
    if (a < 2)
        return 0;
    for (d = 2; d <= sqrt(a); d++)
        if (a % d == 0)
            nd++;
    if (nd == 0)
        return 1;
    else
        return 0;
}

int main()
{
    long long n;
    cin >> n;
    long long aux = n;
    while (aux > 100)
    {
        if (pr(aux))
            cout << aux << " ";
        aux /= 10;
    }
    cout << endl;
    return 0;
}
