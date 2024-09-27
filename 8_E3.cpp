#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream f("V8_E3_S3.txt");
int main()
{
    int n, m = 0, x, a[50], i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        f >> x;
        if (x / 2 == sqrt(x))
        {
            m++;
            a[m] = x;
        }
    }
    int s = 0;
    for (i = 1; i < m; i++)
    {
        cout << a[i] << "+";
        s = s + a[i];
    }
    cout << a[m] << "=";
    s = s + a[m];
    cout << s;
    return 0;
}