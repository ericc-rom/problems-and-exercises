#include <iostream>
using namespace std;

int f(int a)
{

    int d = 2, s = 0;
    while (a != 1)
    {
        while (a % d == 0)
        {
            s++;
            a = a / d;
        }
        d++;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int copie = n;
    int ok = 0;
    do
    {
        if (f(n) != 1)
        {
            ok = 1;
            cout << "NU";
        }
        if (n >= 100)
            n = (n % 100) * 10 + n / 100;
        else if (n >= 10)
            n = (n % 10) * 10 + n / 10;
    } while (ok == 0 && n != copie);
    if (ok == 0)
        cout << "DA";
    return 0;
}