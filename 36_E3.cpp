#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = 0;
    int nr = 5;

    while (k < n)
    {
        cout << nr << " ";
        k++;
        nr += 5;
    }

    cout << endl;
    return 0;
}
