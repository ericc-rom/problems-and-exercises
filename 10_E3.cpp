#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cin >> n;
    int a[100];
    for (i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; ++i)
    {
        int s = 0;
        for (j = 0; j < n - i; ++j)
            s += a[j];
        cout << s << endl;
    }
    return 0;
}
