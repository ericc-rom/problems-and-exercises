#include <iostream>
using namespace std;

int f(int a)
{
    int d = 2;
    for (d = 2; d <= a / 2; d++)

        if (a % d == 0)
            return d;
    return a;
}

int main()
{

    int n, v[100], i, a, nrEl = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if (a == f(a))
        {
            int j, poz = nrEl;
            for (j = 0; j < nrEl; j++)
            {
                if (v[j] > a)
                {
                    poz = j;
                    break;
                }
            }
            for (j = nrEl; j > poz; j--)
                v[j] = v[j - 1];
            v[poz] = a;
            nrEl++;
        }
    }
    for (i = 0; i < nrEl; i++)
        cout << v[i] << " ";
    return 0;
}