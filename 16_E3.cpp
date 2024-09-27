#include <iostream>
using namespace std;
int main()
{
    int v[10];
    int k = 0;  
    for (int i = 0; i < 10; i++)
        cin >> v[i];
    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 13 == 0)
            k++;
    }
    cout << k << endl;
    if (k > 0)
    {
        for (int i = 0; i < 10; i++)
        {
            if (v[i] % 13 == 0)
                cout << (i + 1) << " ";
        }
        cout << endl;
    }

    return 0;
}
