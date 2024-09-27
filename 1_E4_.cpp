#include <iostream>
using namespace std;
int sub(int v[100], unsigned int n, int a)
{
    int i, nrap = 0;
    for (i = 0; i < n; i++)
        if (v[i] == a)
            nrap++;
    return nrap;
}

int main()
{
    unsigned int n, i, p = 0;
    do
    {
        cout << "Introduceti un numar natural mai mic sau egal cu 100 n=";
        cin >> n;
    }while (n > 100);
    int v[n];
    for (i = 0; i < n; i++)
        cin >> v[i];
    for (i = 0; i < n; i++)
        if (sub(v, n, v[i]) > 1)
            p++;
    if (p == 0)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}