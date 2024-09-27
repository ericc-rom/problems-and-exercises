#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int m[100];
    for (int i = 0; i < k; i++)
        m[i] = n * (i + 1);
        
    for (int i = k - 1; i >= 0; i--)
        cout << m[i] << " ";
    return 0;
}
