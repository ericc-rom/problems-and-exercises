#include <iostream>
using namespace std;

void sortareDescrescatoare(int a[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < n - i - 1; ++j)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void P(int a[], int n, int k, int &smax)
{
    if (k <= 0 || k > n)
    {
        smax = 0;
        return;
    }
    sortareDescrescatoare(a, n);
    smax = 0;
    for (int i = 0; i < k; ++i)
        smax += a[i];
}

int main()
{
    int a[100];
    int n, k, smax;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> k;
    P(a, n, k, smax);
    cout << "Cea mai mare suma de " << k << " termeni este: " << smax << endl;

    return 0;
}
