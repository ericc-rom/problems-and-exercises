#include <iostream>
using namespace std;

int MULT(int a[], int n)
{

    int gasit[101] = {0};
    for (int i = 0; i < n; i++)
        if (a[i] >= 1 && a[i] <= n)
            gasit[a[i]] = 1;
    for (int i = 1; i <= n; i++)
        if (gasit[i] == 0)
            return 0;
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 1; i <= n ;i++)
        cin >> a[i];
    if (MULT(a, n))
        cout << "Tabloul contine toate valorile din multimea {1, 2, ..., " << n << "}" << endl;
    else
        cout << "Tabloul NU contine toate valorile din multimea {1, 2, ..., " << n << "}" << endl;

    return 0;
}
