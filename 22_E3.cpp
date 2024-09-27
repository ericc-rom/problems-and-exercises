#include <iostream>
using namespace std;
void shift(int n, int x[])
{
    int k = x[0];
    for (int i = 0; i < n - 1; i++)
        x[i] = x[i + 1];
    x[n - 1] = k;
}

int main()
{
    int n;
    cin >> n;
    int x[100];
    for (int i = 0; i < n; i++)
        cin >> x[i];
    for (int i = 0; i < n / 2; i++)
        for (int j = 0; j < n - i - 1; j++)
            shift(n - i, x + i);
    for (int i = 0; i < n; i++)
        cout << x[i] << " ";
    return 0;
}
