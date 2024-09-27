#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a < 1 || b < 1 || c < 1 || a > 10000 || b > 10000 || c > 10000 || a > b)
        return 1;
    int pm = (a + c - 1) / c * c;
    int um = (b / c) * c;
    if (pm > b)
    {
        cout << 0 << endl;
    }
    else
    {
        int nrm = (um - pm) / c + 1;
        cout << nrm << endl;
    }
    return 0;
}
