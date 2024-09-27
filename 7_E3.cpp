#include <iostream>
#include <fstream>
using namespace std;
ofstream f("V7_E3_S3.txt");
int main()
{
    int n, v[300], i, p = 0, ip = 0, gasit;
    cin >> n;
    for (i = 1; i <= n * 3; i++)
        cin >> v[i];
    gasit = 0;
    i = 1;
    while (i <= n && !gasit)
    {
        if (v[i] % 2 == 0)
        {
            gasit = 1;
            p = i;
        }
        i++;
    }
    gasit = 0;
    i = 3 * n;
    while (i >= 2 * n + 1 && !gasit)
    {
        if (v[i] % 2 == 1)
        {
            gasit = 1;
            ip = i;
        }
        i--;
    }
    if (p != 0 && ip != 0)
    {
        int aux = v[p];
        v[p] = v[ip];
        v[ip] = aux;
    }
    for (i = 1; i <= n * 3; i++)
        f << v[i] << " ";
    return 0;
}