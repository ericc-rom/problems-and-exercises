#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    int v[100], n = 0, x, i, j, aux;
    n = 0;
    ifstream fin("V3_E3_S3.txt");
    while (fin >> x)
    {
        if (x >= 100)
        {
            v[n] = x;
            n = n + 1;
        }
    }
    if (n == 0)
        cout << "NU EXISTA";
    else
        for (i = 0; i <= n - 2; i++)
            for (j = i + 1; j <= n - 1; j++)
            {
                if (v[i] > v[j])
                {
                    aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
    for (i = 0; i <= n - 1; i++)
        cout << v[i] << " ";
    return 0;
}