#include <iostream>
using namespace std;
int cinci(int n, int v[100])
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        int m = v[i];
        while (m > 0)
        {
            if (m % 10 == 5)
                k++;
            m /= 10;
        }
    }
    return k;
}