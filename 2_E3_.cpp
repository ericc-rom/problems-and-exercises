#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("V2_E3_S3.txt");
int main()
{
    int a, v[101], nrEl = 0, i;
    while (v >> a)
    {
        if (a > 0)
        {
            int j;
            i = 1;
            while (i <= nrEl && v[i] < a)
                i++;
            nrEl++;
            for (j = nrEl; j > i; j--)
                v[j] = v[j - 1];
            v[i] = a;
        }
    }
    for (i = 1; i <= nrEl; i++)
        cout << v[i] << " ";
    return 0;
}