#include <iostream>
using namespace std;
void f(int n, int a[])
{
    int minp = -1, maxi = -1;          
    int minpVal = 10000, maxiVal = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            if (a[i] < minpVal)
            {
                minpVal = a[i];
                minp = i;
            }
        }
        else
        { 
            if (a[i] > maxiVal)
            {
                maxiVal = a[i];
                maxi = i;
            }
        }
    }
    if (minp != -1 && maxi != -1)
    {
        int k = a[minp];
        a[minp] = a[maxi];
        a[maxi] = k;
    }
}
int main()
{
    int n, a[];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[];
    f(n, a);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}
