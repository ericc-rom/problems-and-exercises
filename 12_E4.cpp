#include <iostream>
using namespace std;

int nr(int n, int c)
{
    int count = 0;
    while (n > 0)
    {
        if (n % 10 == c)
        {
            count++;
        }
        n /= 10;
    }
    return count;
}
 
int main()
{
    int n;
    cin >> n;
    if (n < 0 || n > 99999999)
    {
        cout << "Numar invalid.\n";
        return 1;
    }
    int k = 0;
    for (int i = 0; i < 10; i++)
    {
        if (nr(n, i) > 0)
        {
            k++;
        }
    }
    cout << "Numarul de cifre distincte ale numarului este " << k << ".\n";
    return 0;
}
