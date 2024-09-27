#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int v[100];
    for (int i = 0; i < n; i++)
        cin >> v[i];
    int maxk = 0, ck = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            ck++;
            if (ck > maxk)
                maxk = ck;
        }
        else
        {
            ck = 0;
        }
    }

    cout << maxk << endl;

    return 0;
}
