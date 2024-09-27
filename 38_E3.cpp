#include <iostream>
using namespace std;

void Del(int &x, int y)
{
    int s = 0;
    int f = 1;
    int ok = 0;

    while (x > 0)
    {
        int cifra = x % 10;
        x /= 10;
        if (cifra <= y)
        {
            s = s + cifra * f;
            f *= 10;
            ok = 1;
        }
    }
    if (ok)
        x = s;
    else
        x = -1;
}

int main()
{
    int x = 37659;
    int y = 6;
    Del(x, y);
    cout << "x = " << x << endl;
    return 0;
}
