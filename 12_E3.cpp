#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("V12_S3_E3.txt");
    int m, n;
    fin >> m >> n;
    int a[100], b[100];
    for (int i = 0; i < m; i++)
    {
        fin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        fin >> b[i];
    }
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            k++;
            j++;
        }
        else
        {
            i++;
            j++; 
        }
    }
    while (j < n)
    {
        k++;
        j++;
    }
    cout << k << endl;
    return 0;
}
