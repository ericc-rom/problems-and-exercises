#include <iostream>
using namespace std;

void impar(int x[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (x[i] % 2 != 0)
        {
            cout << "DA" << endl;
            return;
        }
    }
    cout << "NU" << endl;
}
