#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n <= 0 || n > 1000)
    {
        cout << "Numarul introdus nu este valid. Trebuie sa fie intre 1 si 1000.\n";
        return 0;
    }
    int count = 0;
    for (int k = 1; count < n; k++)
    {
        for (int j = k; j > 0; j--)
        {
            if (count < n)
            {
                cout << j << " ";
                count++;
            }
        }
    }
    cout << endl;
    return 0;
}
