#include <iostream>
using namespace std;


void P(int a[], int k, int &max)
{
    max = a[0];
    for (int i = 1; i < k; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
}


int main()
{
    int n;
    cin >> n;
    int a[100], r[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int max;
        P(a, i + 1, max);
        r[i] = max;
    }

    cout << "Tabloul rezultat este: ";
    for (int i = 0; i < n; i++)
    {
        cout << r[i] << " ";
    }
    return 0;
}
