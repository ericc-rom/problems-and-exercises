#include <iostream>
using namespace std;

void ordonare(int x[], int n)
{
    int imp[100], k = 0;

    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 != 0)
            imp[k++] = x[i];
    }

    for (int i = 0; i < k - 1; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (imp[i] > imp[j])
            {
                int l = imp[i];
                imp[i] = imp[j];
                imp[j] = l;
            }
        }
    }

    k = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 != 0)
            x[i] = imp[k++];
    }

    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    cout << endl;
}
