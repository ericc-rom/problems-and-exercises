#include <iostream>
using namespace std;
int prim(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;
    int prime[30];
    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int numar;
        cin >> numar;
        if (prim(numar))
        {
            int j = k - 1;
            while (j >= 0 && prime[j] > numar)
            {
                prime[j + 1] = prime[j];
                j--;
            }
            prime[j + 1] = numar;
            k++;
        }
    }
    for (int i = 0; i < k; i++)
        cout << prime[i] << " ";
    cout << endl;
    return 0;
}
