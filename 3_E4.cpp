#include <iostream>
using namespace std;

int cif(int a, int b)
{
    int k = 0, aux;
    cin >> a >> b;
    aux = a;
    while (a)
    {
        if (b == a % 10)
            k++;
        a /= 10;
    }
    return k;
}

int main()
{
    int n, k, i, vf[10], ok = 0, nr = 0, p = 1, x;
    int aux;
    cin >> n;
    for (i = 1; i <= 9; i++)
        vf[i] = 0;
    while (n)
    {
        if (vf[n % 10] == 0)
            vf[n % 10] = cif(n, n % 10);
        n /= 10;
    }
    for (i = 9; i >= 0 && ok == 0; i--)
    {
        if (vf[i] % 2 == 1)
        {
            ok = 1;
            nr = 0;
        }
        else
        {
            if (vf[i] > 0)
            {
                int x = 0 /*numar nou*/, aux = p;
                while (vf[i])
                {
                    x = x * 10 + i;
                    vf[i]--;
                    if (vf[i] % 2 == 0)
                        p *= 10;
                }
            }
            x = ((x / aux) * (p / aux) * (p / aux) + x)* aux + x % aux;
        }
    }
    cout << x << '\n';
    return 0;
}