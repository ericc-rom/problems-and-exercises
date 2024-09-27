#include <iostream>
using namespace std;
 
void nule(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j++] = a[i];
        }
    }
    while (j < n)
    {
        a[j++] = 0;
    }
}

int main()
{
    int n;
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    nule(a, n);
    int k = 0;
    for (int i = 0; i < n && k < 5; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << " ";
            k++;
        }
    }
    if (k < 5)
        cout << "NU EXISTA" << endl;
    return 0;
}
